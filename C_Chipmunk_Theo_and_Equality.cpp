
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        unordered_map<int, ll> totalCost;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            unordered_map<int, int> best;

            queue<pair<int,int>> q;
            q.push({a[i], 0});

            while (!q.empty()) {
                auto [x, d] = q.front();
                q.pop();

                if (best.count(x)) continue;
                best[x] = d;

                if (x % 2 == 0) {
                    q.push({x / 2, d + 1});
                } else {
                    q.push({x + 1, d + 1});
                }
            }

            for (auto &[val, cost] : best) {
                totalCost[val] += cost;
                freq[val]++;
            }
        }

        ll ans = LLONG_MAX;

        for (auto &[val, cnt] : freq) {
            if (cnt == n) {
                ans = min(ans, totalCost[val]);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}