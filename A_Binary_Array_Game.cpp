#include <iostream>
#include<vector>
using namespace std;

void game(vector<int>& arr) {
    if (arr[0] == 0 && arr[arr.size() - 1] == 0) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        game(arr);
    }
    return 0;
}