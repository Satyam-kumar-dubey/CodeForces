
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
        ll n;
        string s;
        cin>>n>>s;

        vector<ll>v;
        ll sm = 0;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == 'L')
            {
                sm += i;
                ll g = n-1-2*i;
                if(g > 0)
                v.push_back(g);
            }
            else
            {
                sm += n-1-i;
                ll g = 2*i-n+1;
                if(g > 0)
                v.push_back(g);
            }
        }
        sort(v.rbegin(),v.rend());
        ll ans = sm, it = 0;
        
        for(ll i=1; i<=n; i++)
        {
            if(it < v.size())
            {
                ans += v[it];
                it++;
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
}