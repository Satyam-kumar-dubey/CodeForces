#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        a.resize(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        // try largest L first
        for (int L = n / 2; L >= 1; L--) {

            vector<pair<int,int>> good; 
            // stores (l, r)

            vector<int> freq(6005, 0);

            // build first window
            for (int i = 0; i < L; i++)
                freq[a[i]]++;

            auto is_good = [&]() -> bool {
                int mn = 6000, mx = 0;
                for (int v = 1; v <= 6000; v++) {
                    if (freq[v]) {
                        mn = min(mn, v);
                        mx = max(mx, v);
                    }
                }
                return (mx - mn + 1 == L);
            };

            if (is_good())
                good.push_back({0, L - 1});

            for (int i = L; i < n; i++) {
                freq[a[i]]++;
                freq[a[i - L]]--;

                if (is_good())
                    good.push_back({i - L + 1, i});
            }

            // try to find 2 non-overlapping good segments
            int sz = good.size();

            for (int i = 0; i < sz; i++) {
                for (int j = i + 1; j < sz; j++) {

                    auto [l1, r1] = good[i];
                    auto [l2, r2] = good[j];

                    if (r1 < l2 || r2 < l1) { 
                        // non-overlapping

                        int mn = min(l1, l2);
                        int mx = max(r1, r2);

                        if (mx - mn + 1 == 2 * L) {
                            ans = L;
                            goto done;
                        }
                    }
                }
            }
        }

        done:
        cout << ans << "\n";
    }

    return 0;
}