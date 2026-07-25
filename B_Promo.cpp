#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
        cin >> x;
}

bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    in(v);

    vector<pair<int,int>> qr(q);
    for(auto &x : qr)
    cin >> x.first >> x.second;

    sort(v.begin(), v.end());

    vector<ll> pref(n + 1, 0);
    for(int i = 0; i < n; i++)
    pref[i + 1] = pref[i] + v[i];

    for(int i = 0; i < q; i++)
    {
        int x = qr[i].first;
        int y = qr[i].second;

        int l = n - x;
        int r = l + y;

        cout << pref[r] - pref[l] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
