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

    if(n % 2 != 0)
    {
        cout<<"NO"<<'\n';
        return;
    }
    
    int sm = INT_MAX;
    for(int i=0; i<n; i=i+2)
    {
        sm = min(sm,v[i]);
    }
    int sm2 = INT_MIN;
    for(int i=1; i<n; i=i+2)
    {
        sm2 = max(sm2,v[i]);
    }

    cout<<(sm > sm2+1 ? "YES" : "NO")<<'\n';
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
