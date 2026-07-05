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

    set<int>s;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    int rem = n - s.size();
    cout<<(rem % 2 == 0 ? s.size() : s.size()-1)<<'\n';
    
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
