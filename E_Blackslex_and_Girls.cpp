#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    vector<long long> p(n);
    
    long long sum_p = 0;
    long long min_x = 0;
    long long min_y = 0;
    bool has_zero = false;
    bool has_one = false;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sum_p += p[i];
        
        if (s[i] == '0') {
            min_x += (p[i] / 2) + 1;
            has_zero = true;
        } else {
            min_y += (p[i] / 2) + 1;
            has_one = true;
        }
    }

    if (x + y < sum_p || x < min_x || y < min_y) {
        cout << "NO" << endl;
        return;
    }

    if (!has_one && x < y + n) {
        cout << "NO" << endl;
        return;
    }
    if (!has_zero && y < x + n) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}