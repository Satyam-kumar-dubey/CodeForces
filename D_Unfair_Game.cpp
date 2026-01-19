#include <iostream>
#include <algorithm>
#include <cstdint>

using namespace std;

long long C[65][65];

void buildComb(int maxN) {
    for (int n = 0; n <= maxN; n++) {
        C[n][0] = C[n][n] = 1;
        for (int r = 1; r < n; r++) {
            C[n][r] = C[n - 1][r - 1] + C[n - 1][r];
        }
    }
}

long long countWinnable(long long nPow2, long long k) {
    
    int d = __builtin_ctzll(nPow2);

    long long win = 0;

    
    for (int L = 1; L <= d; L++) {
        long long maxOnes = k - (L - 1) - 1;
        if (maxOnes < 0) continue;

        int restBits = L - 1;
        int upto = min(restBits, (int)maxOnes);

        long long ways = 0;
        for (int ones = 0; ones <= upto; ones++) {
            ways += C[restBits][ones];
        }
        win += ways;
    }

    
    if (k >= d + 1) win++;

    return win;
}

int main() {
   
    buildComb(64);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long winnable = countWinnable(n, k);
        long long notWinnable = n - winnable;

        cout << notWinnable << '\n';
    }

    return 0;
}