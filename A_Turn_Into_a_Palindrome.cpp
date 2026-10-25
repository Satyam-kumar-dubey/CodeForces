#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a;
        char c;
        string s;

        cin >> a >> c >> s;

        int i = 0;
        int j = a - 1;
        int sum = 0;

        while (i < j) {
            if (s[i] != s[j] && s[i] != c && s[j] != c) {
                sum += 2;
            } else if (s[i] != s[j]) {
                sum += 1;
            }

            i++;
            j--;
        }

        cout << sum << '\n';
    }

    return 0;
}