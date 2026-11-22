
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;

    while(t--)
    {
        ll n,x; cin>>n>>x;

        vector<ll>v(n);
        for(auto &x : v)
        cin>>x;

        ll st = 0, en = 2e9;
        ll ans = 0;

        while(st <= en)
        {
            ll mid = st + (en-st)/2;
            ll ttl = 0;

            for(ll i=0; i<n; i++)
            {
                if(mid > v[i])
                ttl += mid - v[i];
            }

            if(ttl <= x)
            {
                ans = mid;
                st = mid + 1;
            }
            else
            en = mid -1;
        }
        cout<<ans<<'\n';
    }
}