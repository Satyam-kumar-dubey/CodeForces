#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll a, n, d1, d2;
        cin >> a >> n;
        cin >> d1 >> d2;

        ll ans = LLONG_MAX;

        queue<ll> q;

        if(d1 == 0 || d2 == 0)
        ans = min(ans, a);

        if(d1 != 0)
        q.push(d1);

        if(d2 != 0 && d2 != d1)
        q.push(d2);

        while(!q.empty())
        {
            ll cur = q.front();
            q.pop();

            ans = min(ans, llabs(cur - a));

            if(cur <= (ll)1e17 / 10)
            {
                q.push(cur * 10 + d1);
                q.push(cur * 10 + d2);
            }
        }
        cout << ans << '\n';
    }
}