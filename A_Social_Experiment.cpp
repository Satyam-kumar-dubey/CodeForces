#include <iostream>
using namespace std;

int main() {
    int test;
    if (!(cin >> test)) return 0;
    while (test--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << 2 << endl;
        } else if (n == 3) {
            cout << 3 << endl;
        } else {
            
            cout << (n % 2) << endl;
        }
    }
    return 0;
}