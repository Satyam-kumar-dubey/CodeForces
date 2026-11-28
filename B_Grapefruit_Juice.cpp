
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
        ll n,k,p;
        cin>>n>>k>>p;

        vector<ll>v(n);
        ll ind = 0;
        for(auto &x : v)
        {
            cin>>x;
            ind += x;
        }

        sort(v.begin(),v.end());

        ll it = 0, ans = ind;
        while(it+k <= n)
        {
            ll sm = 0;

            for(ll j=0; j<k; j++)
            {
                sm += v[it];
                it++;
            }
            if(sm < p)
            ans += p - sm;
        }

        cout<<ans<<'\n';
    }
}