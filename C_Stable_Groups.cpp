
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    cin>>v[i];

    sort(v.begin(),v.end());

    vector<ll>d;
    for(ll i=1; i<n; i++)
    {
        ll df = v[i] - v[i-1];
        if(df > x)
        d.push_back((df-1)/x);
    }

    ll g = d.size()+1;
    sort(d.begin(),d.end());

    for(ll x : d)
    {
        if(k >= x)
        {
            k -= x;
            g--;
        }
        else
        break;
    }
    cout<<g<<'\n';
}
