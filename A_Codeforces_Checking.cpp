#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s = "codeforces";

    while (t--) {
        char c;
        cin >> c;

        bool found = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}