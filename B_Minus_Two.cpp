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

void solve()
{
    int n;
    cin>>n;

    vector<ll>v(n);
    in(v);

    ll od = 0, ev2 = 0, ev4 = 0;
    for(auto &x : v)
    {
        if(x % 2 != 0)
        od++;
        else if(x % 4 == 0)
        ev4++;
        else
        ev2++;
    }
    cout<<max({od,ev2,ev4})<<'\n';

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
