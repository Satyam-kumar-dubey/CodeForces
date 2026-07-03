#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}
bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

void solve()
{
    ll x,y,z,K;
    cin>>x>>y>>z>>K;

    ll ans = 0;
    for(ll i=1;i<=x;i++)
    {
        for(ll j=1;j<=y;j++)
        {
            ll area = 1LL*i*j;

            if(K % area)
            continue;

            ll k = K / area;

            if(k<1 || k>z)
            continue;

            ans = max(ans,1LL*(x-i+1)*(y-j+1)*(z-k+1));
        }
    }
    cout<<ans<<'\n';
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
}
