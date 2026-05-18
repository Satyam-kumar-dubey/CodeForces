

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

        ll tw = 0, oth = 0;
        for(char c: s)
        {
            if(c == '2')
            tw++;
            else if(c == '1' || c == '3')
            oth = max(oth+1, tw+1);
        }
        ll a = max(tw, oth);
        cout<<s.size()-a<<'\n';
    }
}
