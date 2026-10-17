#include <iostream>
using namespace std;

int main() {
    long long n, d, a, c = 0;
    cin >> n >> d >> a;

    for (long long i = 1; i < n; i++) {
        long long b;
        cin >> b;

        if (a >= b) {
            long long m = (a - b) / d + 1;
            b += m * d;
            c += m;
        }

        a = b;
    }

    cout << c << endl;

    return 0;
}