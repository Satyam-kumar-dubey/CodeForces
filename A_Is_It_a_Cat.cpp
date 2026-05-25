
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        for( char &c : s)
        c = tolower(c);

        string a;
        a += s[0];

        for(int i=1; i<n; i++)
        {
            if(s[i] != s[i-1])
            a += s[i];
        }
        cout<<(a == "meow" ? "YES" : "NO")<<'\n';
    }
    
}
