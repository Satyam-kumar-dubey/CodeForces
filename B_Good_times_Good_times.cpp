#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

bool check(ll n)
{
    int mask = 0;
    while(n > 0)
    {
        mask |= (1 << (n % 10));
        n /= 10;
    }

    return __builtin_popcount(mask) <= 2;
}

void solve()
{
    ll x;
    cin >> x;

    for(ll y = 2; y <= 10000; y++)
    {
        if(check(y) && check(x * y))
        {
            cout << y << endl;
            return;
        }
    }

    for(int len = 1; len <= 17; len++)
    {
        for(int d = 1; d <= 9; d++)
        {
            ll val = 0;

            for(int i = 0; i < len; i++)
                val = val * 10 + d;

            if(val % x == 0)
            {
                ll y = val / x;

                if(y >= 2 && y <= 1000000000LL && check(y))
                {
                    cout << y << endl;
                    return;
                }
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}