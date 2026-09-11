#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int c = 0;

    for (int i = 0; i < s.length() - 2; i++) {
        char ch = s[i];

        if (ch == 'Q') {
            for (int j = i + 1; j < s.length() - 1; j++) {
                char ch2 = s[j];

                if (ch2 == 'A') {
                    for (int k = j + 1; k < s.length(); k++) {
                        char ch3 = s[k];

                        if (ch3 == 'Q') {
                            c++;
                        }
                    }
                }
            }
        }
    }

    cout << c << endl;

    return 0;
}
