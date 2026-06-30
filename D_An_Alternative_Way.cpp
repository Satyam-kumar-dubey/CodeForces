
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>& v)
{
    for (auto &x : v)
    cin >> x;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    in(a);
    in(b);

    ll val = 0;
    string ans = "YES";

    for (int i = 0; i < n; i++)
    {
        ll target = b[i] - a[i] + val;
        if (target < 0)
        {
            ans = "NO";
            break;
        }
        val = target;
    }

    cout<<ans<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while (t--)
    {
        solve();
    }
}