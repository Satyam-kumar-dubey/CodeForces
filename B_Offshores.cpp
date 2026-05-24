
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,tr,cr;
        cin>>n>>tr>>cr;
        vector<ll>v(n);

        ll tt = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            tt += (v[i] / tr);
        }
        ll am = tt * cr;

        ll rs = LLONG_MIN;
        for(ll x : v)
        {
            ll c = x / tr;
            ll cc = c * cr;
            ll tp = am - cc;
            rs = max(rs, tp+x);
        }
        cout<<rs<<'\n';
    }
    
}
