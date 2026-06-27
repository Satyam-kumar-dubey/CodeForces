
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll val = 998244353;

ll solve(ll a, ll b)
{
    ll ans = 1;
    a %= val;
    while(b > 0)
    {
        if (b & 1)
        ans = (ans * a) % val;
        a = (a * a) % val;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        ll n,m,r,c;
        cin>>n>>m>>r>>c;

        ll x = (r - 1) * (m - c + 1) + (c - 1) * (n - r + 1) + (r - 1) * (c - 1);
        cout<<solve(2, x)<<'\n';
    }
}