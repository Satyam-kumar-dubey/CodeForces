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
    int n;
    cin>>n;

    vector<int>v(n);
    in(v);

    int zero = 0;
    for(int x : v)
    {
        if(x == 0)
        zero++;
    }

    if(v[0] == 0 && v[n-1] == 0)
    cout<<0<<'\n';
    else if(v[0] != 0 && v[n-1] == 0 && zero > 1)
    cout<<1<<'\n';
    else if(v[0] == 0 && v[n-1] != 0 && zero > 1)
    cout<<1<<'\n';
    else if(v[0] != 0 && v[n-1] != 0 && zero >= 2)
    cout<<2<<'\n';
    else
    cout<<-1<<'\n';

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
