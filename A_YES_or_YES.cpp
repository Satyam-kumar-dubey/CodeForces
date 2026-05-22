
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
        string s;
        cin>>s;

        for(char &c : s)
        c = tolower(c);

        cout<<(s == "yes" ? "YES" : "NO")<<'\n';
    }
    
}
