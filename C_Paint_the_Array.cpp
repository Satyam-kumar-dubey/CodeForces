#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<ll>&v)
{
    for(auto &x: v)
        cin >> x;
}

ll hcf(ll a, ll b)
{
    if(a == 0)
    return b;
    
    return hcf(b % a, a);
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    in(v);

    vector<ll> f, s;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            f.push_back(v[i]);
        else
            s.push_back(v[i]);
    }

    ll val = s[0];
    for(int i = 1; i < s.size(); i++)
        val = hcf(val, s[i]);

    bool fl = false;
    for(auto &x : f)
    {
        if(x % val == 0)
        {
            fl = true;
            break;
        }
    }

    if(!fl)
    {
        cout << val << '\n';
        return;
    }

    val = f[0];
    for(int i = 1; i < f.size(); i++)
        val = hcf(val, f[i]);

    fl = false;
    for(auto &x : s)
    {
        if(x % val == 0)
        {
            fl = true;
            break;
        }
    }

    cout << (fl ? 0 : val) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
