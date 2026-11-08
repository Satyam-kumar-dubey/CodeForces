
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll aEven = 0, bEven = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if (x % 2 == 0) aEven++;
        }
        for (ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if (x % 2 == 0) bEven++;
        }

        bool f;
        if (k % 2 == 0)
        f = (bEven >= aEven);   
        else
        f = (aEven >= bEven);  

        cout << (f ? "YES" : "NO") << '\n';
    }
}