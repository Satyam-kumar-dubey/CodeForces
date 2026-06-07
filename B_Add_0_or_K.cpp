
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        ll k;
        cin>>n>>k;

        vector<ll>v(n);
        for (auto &x : v)
        cin >> x;

        if (k & 1)
        {
            for (auto &x : v)
            if (x & 1) x += k;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ll r = v[i] % (k + 1);
                v[i] += r * k;
            }
        }

        for (ll x : v)
        cout<<x<<' ';
        cout<<'\n';
    }
}