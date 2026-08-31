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
        int n, k, p;
        cin >> n >> k >> p;

        if (k == 0)
        {
            cout << 0 << '\n';
        }
        else if (abs(k) > n * p)
        {
            cout << -1 << '\n';
        }
        else
        {
            int operations = (abs(k) + p - 1) / p;
            cout << operations << '\n';
        }
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
