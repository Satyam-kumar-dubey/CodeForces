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
    int a, b, n;
    cin>>a>>b>>n;

    int cnt = 0;

    while (max(a, b) <= n)
    {
        if (a < b)
        a += b;
        else
        b += a;
        cnt++;
    }
    cout << cnt << "\n";
}

int main()
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