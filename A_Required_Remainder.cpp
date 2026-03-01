#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = ((n - y) / x) * x + y;
        cout << k << "\n";
    }
    return 0;
}