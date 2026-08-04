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

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    int i = 2;
    while (gcd(n - i - 1, i) != 1)
    {
        i++;
    }

    cout << (n - i - 1) << " " << i << " " << 1 << endl;
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
