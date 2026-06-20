
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
        int x,y,a,b;
        cin>>x>>y>>a>>b;

        int mn = min(x,y);
        int mx = max(x,y);

        ll c = (x+y)*a;
        int d = mx - mn;
        ll cst = d * a;
        ll val = mn * b;

        cst += val;
        
        cout<<min(c,cst)<<'\n';
    }
    
}
