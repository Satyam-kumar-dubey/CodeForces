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
    string s;
    cin>>n>>s;

    int hsh = 0, ans = 0;
    for(char c : s)
    {
        if(c == '#')
        hsh++;
        else
        {
            int tt = (hsh+1)/2;
            ans = max(ans,tt);
            hsh = 0;
        }
    }
    int ltt = (hsh+1)/2;
    ans = max(ans, ltt);
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
