#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        vector<int> v;

        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != '0') {
                int val = s[i] - '0';
                for (int j = 0; j < len - i - 1; j++) {
                    val *= 10;
                }
                v.push_back(val);
            }
        }

        cout << v.size() << '\n';

        for (int x : v) 
        cout << x << ' ';
        
        cout << '\n';
    }
}