
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
        ll n;
        cin>>n;
        vector<ll>f(101,0);

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;

            f[x]++;
        }
        ll mx = *max_element(f.begin(),f.end());

        vector<ll>ans;
        for(ll i=0; i<mx ; i++)
        {
            for(ll j=100; j>=1; j--)
            {
                if(f[j] > 0)
                {
                    ans.push_back(j);
                    f[j]--;
                }
            }
        }
        for(auto &x : ans)
        cout<<x<<" ";

        cout<<'\n';
    }
}