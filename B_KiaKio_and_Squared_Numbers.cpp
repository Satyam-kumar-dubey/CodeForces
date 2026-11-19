
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll solve(ll x)
{
    ll s = 0;
    while(x)
    {
        ll d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> cnt;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;

            for(ll k = 0; k < 100; k++)
            x = solve(x);

            cnt[x]++;
        }
        ll ans = 0;
        for(auto &p : cnt)
        ans += p.second * (p.second - 1) / 2;

        cout<<ans<<"\n";
    }
}