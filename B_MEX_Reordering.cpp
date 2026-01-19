#include <iostream>
#include<vector>
using namespace std;

int main() {

    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;

        vector<int> v(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x]++;
        }

        if (v[0] == 0) {
            cout <<"NO"<<endl;
        }
        else if (v[0] >= 2 && v[1] == 0) {
            cout <<"NO"<<endl;
        }
        else {
            cout <<"YES"<<endl;
        }
    }

    
}
