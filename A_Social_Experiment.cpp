#include <iostream>
using namespace std;

int main() {
    int testCases;

    if (!(cin >> testCases))
    return 0;
    
    while (testCases--) {
        int value;
        cin>>value;

        if (value == 2) {
            cout << 2 << endl;
        } else if (value == 3) {
            cout << 3 << endl;
        } else {
            cout<<(value % 2) << endl;
        }
    }
}