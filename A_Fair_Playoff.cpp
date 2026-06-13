
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int tr = max(a,b);
        int mn = min(c,d);
        int mx = max(c,d);

        if(tr > mn && tr < mx)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    
}
