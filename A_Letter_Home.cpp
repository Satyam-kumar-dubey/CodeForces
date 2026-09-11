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
        int n, s;
        cin >> n >> s;

        vector<int> x(n);

        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int l = x[0];
        int r = x[n - 1];

        int ans = (r - l) + min(abs(s - l), abs(s - r));

        cout << ans << '\n';    
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
