
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tst;
    cin>>tst;

    while(tst--) {
        int n;
        string s,t;
        cin>>n;
        cin>>s>>t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
}