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

    vector<int>ps(n+1);
    ps[0] = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        ps[i+1] = ps[i] + v[i];
        else
        ps[i+1] = ps[i] - v[i];
    }
    set<int>s;
    bool f = true;
    for(auto &x : ps)
    {
        if(s.count(x))
        {
            f = false;
            break;
        }
        s.insert(x);
    }
    cout<<(!f ? "YES" : "NO")<<'\n';

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
