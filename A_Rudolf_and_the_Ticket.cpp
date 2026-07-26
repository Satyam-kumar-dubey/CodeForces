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
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>l(n), r(m);
    in(l);
    in(r);

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            if(l[i] + r[j] <= k)
            cnt++;
        }
    }
    cout<<cnt<<'\n';
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
