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
    int n,x;
    cin>>n>>x;

    if(n <= 2)
    {
        cout<<1<<'\n';
        return;
    }

    int val = n-2, flr = 1;
    int q = val / x;
    
    flr = (val % x == 0 ? flr + q : flr + q + 1);

    cout<<flr<<'\n';
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
