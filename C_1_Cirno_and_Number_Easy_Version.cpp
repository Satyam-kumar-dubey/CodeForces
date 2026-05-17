#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll a, d1, d2;
ll ans;

void solve(ll cur, int len)
{
    ans = min(ans, llabs(a - cur));

    if(len == 18) return;
    
    solve(cur * 10 + d1, len + 1);
    if(d1 != d2)
    solve(cur * 10 + d2, len + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>a>>n;
        cin>>d1>>d2;

        ans = LLONG_MAX;

        if(d1 == 0 || d2 == 0)
        ans = min(ans, a);

        if(d1 != 0) solve(d1, 1);
        if(d2 != 0 && d2 != d1) solve(d2, 1);

        cout<<ans<<'\n';
    }
}