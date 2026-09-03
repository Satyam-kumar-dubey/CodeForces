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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll sum = a + b + c;

        ll days = (n - 1) / sum * 3;
        ll covered = days / 3 * sum;

        if (covered + a >= n)
            days += 1;
        else if (covered + a + b >= n)
            days += 2;
        else
            days += 3;

        cout << days << '\n';
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
