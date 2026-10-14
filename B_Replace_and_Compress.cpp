
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
       string s;
       cin>>s;

       bool l = false, sh = false;
       for(int i=1; i<s.size()-1; i++)
       {
            if(s[i] == s[i-1] && s[i] == s[i+1])
            l = true;
            
            if(s[i-1] == s[i+1] && s[i] != s[i-1])
            sh = true;
       }

        int a = (1+l+sh);
        cout<<a<<'\n';
    }
}