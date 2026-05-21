
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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        cin>>v[i];

        ll s = 0, e = n-1, tr = LLONG_MAX;
        while(s < e)
        {
            ll s = v[s] + v[e];
            ll d = abs(s - k);
            tr = min(tr,d);
            s++;
            e--;
        }
        ll a = 0;
        s = 0, e = n-1;
        while(s < e)
        {
            if(v[s] + v[e] != tr)
            
        }
    }
    
}
