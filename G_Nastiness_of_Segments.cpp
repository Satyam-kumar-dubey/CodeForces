#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << '\n';
            continue;
        }
        if (k == n) {
            cout << 0 << '\n';
            continue;
        }

        int ans = -1;
        for (int d = 1; d <= 60; d++) {
            long long pw = 1LL << d;                 // 2^d
            long long flo = n / pw;                  // floor(n / 2^d)
            long long cei = (n + pw - 1) / pw;       // ceil(n / 2^d)

            if (flo == k || cei == k) {
                ans = d;
                break;
            }

            // after this, ceil will only get smaller as d increases
            if (cei < k) break;
        }

        cout << ans << '\n';
    }

    return 0;
}