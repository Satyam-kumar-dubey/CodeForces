#include<bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> good;

bool check(ll x)
{
    int mask = 0;

    while(x)
    {
        mask |= (1 << (x % 10));
        x /= 10;
    }

    return __builtin_popcount(mask) <= 2;
}

void gen(int len, int mx, int d1, int d2, ll cur)
{
    if(len > 0 && cur >= 2 && cur <= 1000000000LL)
        good.push_back(cur);

    if(len == mx)
        return;

    if(len > 0 || d1 != 0)
        gen(len + 1, mx, d1, d2, cur * 10 + d1);

    if(d1 != d2)
    {
        if(len > 0 || d2 != 0)
            gen(len + 1, mx, d1, d2, cur * 10 + d2);
    }
}

void pre()
{
    for(int i = 0; i <= 9; i++)
    {
        for(int j = i; j <= 9; j++)
        {
            gen(0, 9, i, j, 0);
        }
    }

    sort(good.begin(), good.end());
    good.erase(unique(good.begin(), good.end()), good.end());
}

void solve()
{
    ll x;
    cin >> x;

    for(auto y : good)
    {
        if(check(x * y))
        {
            cout << y << '\n';
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pre();

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}