
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        ll a, b;
        cin >> a >> b;

        bool f = true;
        ll r = 0;
        ll base = 1;

        while(a > 0 || b > 0)
        {
            ll x = a % 10;
            ll y = b % 10;

            b /= 10;

            ll val = y;
            if(val < x)
            {
                if(b == 0)
                {
                    f = false;
                    break;
                }

                ll p = b % 10;
                b /= 10;

                val = p * 10 + val;

                if(val < 10 || val > 18)
                {
                    f = false;
                    break;
                }
            }

            ll di = val - x;

            if(di < 0 || di > 9)
            {
                f = false;
                break;
            }

            r += di * base;
            base *= 10;

            a /= 10;
        }

        if(!f || a > 0 || b > 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << r << '\n';
        }
    }
}