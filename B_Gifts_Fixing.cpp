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

    vector<int>a(n), b(n);
    in(a);
    in(b);

    int fs = *min_element(a.begin(),a.end());
    int ss = *min_element(b.begin(),b.end());

    ll res = 0;
    for(int i=0; i<n; i++)
    res += max(a[i]-fs, b[i]-ss);

    cout<<res<<'\n';
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
