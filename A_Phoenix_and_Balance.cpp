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
        cin >> n;

        ll sum1 = 0, sum2 = 0;

        sum1 = 1LL << n;

        for (int i = 1; i < n / 2; i++) {
            sum1 += 1LL << i;
        }

        for (int i = n / 2; i < n; i++) {
            sum2 += 1LL << i;
        }

        cout << abs(sum1 - sum2) << '\n';
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
