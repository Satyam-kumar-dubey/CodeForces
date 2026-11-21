
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
        ll x; cin>>x;
        ll ans = x;

        for (ll i = 0; i <= x; i++)
        {
            for (ll a = 1; a <= x; a++)
            {
                ll damage = a * (i + 1) - a * (a - 1) / 2;

                if (damage >= x)
                {
                    ans = min(ans, a + i);
                    break;
                }
            }
        }
        cout<<ans<<'\n';
    }
}