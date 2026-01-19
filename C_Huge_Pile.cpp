#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long initialPile, neededPile;
        cin >> initialPile >> neededPile;

        if (neededPile > initialPile) {
            cout << -1 << '\n';
            continue;
        }
        if (neededPile == initialPile) {
            cout << 0 << '\n';
            continue;
        }

        long long minSize = initialPile;
        long long maxSize = initialPile;

        int minutes = 0;
        int answer = -1;

        
        while (minutes <= 60) {
            if (minSize <= neededPile && neededPile <= maxSize) {
                answer = minutes;
                break;
            }

            minSize = minSize / 2;           
            maxSize = (maxSize + 1) / 2;     
            minutes++;

            if (maxSize < neededPile) break;
        }

        cout << answer << '\n';
    }

    return 0;
}