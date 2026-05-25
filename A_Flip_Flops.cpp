
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
        ll n,c,ff;
        cin>>n>>c>>ff;
        vector<ll>v(n);

        for(ll i=0; i<n; i++)
        cin>>v[i];

        sort(v.begin(),v.end());
        for(int i=0; i<n; i++)
        {
            if(v[i] <= c)
            {
                ll d = c - v[i];
                ll vl = min(d,ff);
                ff -= vl;
                c += v[i] + vl;
            }
        }
        cout<<c<<"\n";
    }
    
}
