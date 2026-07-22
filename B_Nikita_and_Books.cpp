
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (auto &x : v)
    cin >> x;

    for (int i = 0; i < n - 1; i++)
    {
        ll val = (i == 0 ? 1 : v[i - 1] + 1);

        if (v[i] < val)
        {
            cout << "NO\n";
            return;
        }

        ll diff = v[i] - val;
        v[i] = val;
        v[i + 1] += diff;
    }

    cout << (n == 1 || v[n - 1] > v[n - 2] ? "YES" : "NO") << '\n';
}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}