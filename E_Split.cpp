
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
        ll n,k;
        cin>>n>>k;

        vector<ll>v(n), f(n+1,0);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            f[v[i]]++;
        }

        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            if(f[i] % k != 0)
            {
                {
                    flag = false;
                    break;
                }
            }
        }
        if(!flag)
        {
            cout<<0<<"\n";
            continue;
        }

        vector<ll>lim(n+1);
        for(ll i=1; i<=n; i++)
        lim[i] = f[i] / k;

        ll ans = 0, st = 0;
        vector<ll>curr(n+1,0);
        for(ll i=0; i<n; i++)
        {
            curr[v[i]]++;
            while(curr[v[i]] > lim[v[i]])
            {
                curr[v[st]]--;
                st++;
            }
            ans += (i - st + 1);
        }
        cout<<ans<<'\n';
    }
}