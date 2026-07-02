#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<ll>&v)
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

bool sq(ll n)
{
    ll x = sqrtl(n);

    if(x*x != n)
    return false;

    return prime(x);
}

void solve()
{
    int n;
    cin>>n;

    vector<ll>v(n);
    in(v);

    for(auto &x : v)
    {
        cout<<(sq(x) ? "YES" : "NO")<<'\n';
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}
