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

    bool fl = false;
    int ans = 0;
    for(int i=0; i<256; i++)
    {
        int val = 0;
        for(int j=0; j<n; j++)
        {
            val ^= (v[j] ^ i);
        }
        if(val == 0)
        {
            ans = i;
            fl = true;
            break;
        }
    }
    cout<<(fl ? ans : -1)<<'\n';
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
