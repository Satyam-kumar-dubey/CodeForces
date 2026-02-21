
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int countBlocks(const string& s) {
    int count = 1; 
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            count++;  
        }
    }
    return count;
}

int main() {
    int tests;
    cin >> tests;
    cin.ignore(); 

    while (tests--) {
        int n;
        cin >> n;
        cin.ignore(); 
        
        string s;
        getline(cin, s);

        int maxBlocks = 0;

        
        for (int i = 0; i < n; i++) {
            string rotated = s.substr(i) + s.substr(0, i);  
            maxBlocks = max(maxBlocks, countBlocks(rotated)); 
        }

        cout << maxBlocks << endl;
    }

    return 0;
}