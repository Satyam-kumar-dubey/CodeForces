
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
        ll x,y;
        cin>>x>>y;

        if(x%2 == 0 || x%y == 0)
        {
            cout<<"YES"<<'\n';
            continue;
        }
        
        x -= y;
        ll rm = x % 2;
        ll lft = rm % y;

        cout<<(lft == 0 ? "YES" : "NO")<<'\n';
    }
}
