#include <bits/stdc++.h>
using namespace std;

bool ok(int x, vector<int>& a, vector<int>& b) {
    int n = a.size();

    int two = 0;
    int blocks = 0;

    for (int i = 0; i < n; i++) {

        bool A = (a[i] >= x);
        bool B = (b[i] >= x);

        if (A && B) {
            two++;
        }

        if (!A && !B) {
            if (i == 0 || (a[i-1] >= x || b[i-1] >= x))
                blocks++;
        }
    }

    return two >= blocks + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int lo = 1, hi = 2 * n, ans = 1;

        while (lo <= hi) {

            int mid = (lo + hi) / 2;

            if (ok(mid, a, b)) {
                ans = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }

        cout << ans << '\n';
    }
}