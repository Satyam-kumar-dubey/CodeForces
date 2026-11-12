
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,h,l;
        cin>>n>>h>>l;

        if(h > l)
        swap(h,l);
        
        ll hcnt = 0, lcnt = 0;
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            if(x <= h)
            hcnt++;
            
            if(x <= l)
            lcnt++;
        }
        cout<<min(hcnt, lcnt/2)<<'\n';
    }
}