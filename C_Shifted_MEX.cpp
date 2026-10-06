#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<ll>v(n);
        for(auto &x : v)
        cin >> x;

        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        ll ans = 1;
        ll cur = 1;

        for(ll i = 1; i < v.size(); i++)
        {
            if(v[i] == v[i-1] + 1)
            {
                cur++;
            }
            else
            {
                cur = 1;
            }

            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }
}
