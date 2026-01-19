#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int war(int n, long long m, int k) {
    int Lmax = k - 1;
    int Rmax = n - k;

    int ans = 1;
    if (m >= 1 && n > 1) ans = 2;

    int maxD = max(Lmax, Rmax);

    for (int D = 1; D <= maxD; D++) {
        long long sLim = m - 2LL * D + 1;
        if (sLim < 0) continue;

        long long s = min((long long)D, sLim);

        if (D <= Lmax) {
            long long s2 = min(s, (long long)Rmax);
            ans = max(ans, (int)(1 + D + s2));
        }

        if (D <= Rmax) {
            long long s2 = min(s, (long long)Lmax);
            ans = max(ans, (int)(1 + D + s2));
        }
    }

    return min(ans, n);
}

int main() {
    

    int tests;
    cin >> tests;
    while (tests--) {
        int n, k;
        long long m;
        cin >> n >> m >> k;
        cout << war(n, m, k) << '\n';
    }
    return 0;
}