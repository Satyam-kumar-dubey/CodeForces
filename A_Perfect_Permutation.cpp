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

    if(n % 2)
    {
        cout<<-1<<"\n";
        return;
    }
    for(int i=0; i<n; i++)
    {
        cout<<n-i<<" ";
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}
