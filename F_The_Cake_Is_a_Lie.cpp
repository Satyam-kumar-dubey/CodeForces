#include <bits/stdc++.h>
#include<numeric>
#include<algorithm>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}
ll exgcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll d = exgcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll n, a, b, k;
        cin >> n >> a >> b >> k;

        ll g = gcd(a, b);

        if (k % g) {
            cout << 0 << '\n';
            continue;
        }

        a /= g;
        b /= g;
        k /= g;

        if (a == 1 && b == 1) {
            cout << n << '\n';
            continue;
        }

        ll ans = 0;

        if (k % a == 0) {
            ans++;
            n--;

            ll x = k / a;

            while (n > 0) {
                if (k - x * b < 0) break;
                if ((k - x * b) % a) break;

                x = (k - x * b) / a;
                ans++;
                n--;
            }
        }

        ll v = 0;

        if (k % (a + b) == 0) {
            v = (ll)1e9;
        } else {
            if (a < b) swap(a, b);

            ll m = b;

            while (true) {
                ll x, y;
                exgcd(a + b, m, x, y);

                if (x < 0) {
                    x += m;
                    y -= (a + b);
                }

                x *= k;
                y *= k;

                ll d = x / m;

                x -= d * m;
                y += d * (a + b);

                if ((m / b) * y + x < 0) break;

                bool ok = true;

                ll x1 = x;
                ll x2 = (m / b) * y + x;

                for (int i = 0; i < v; i++) {
                    if (a * x1 + b * x2 != k) ok = false;

                    if ((k - b * x1) % a) {
                        ok = false;
                        break;
                    }

                    x2 = x1;
                    x1 = (k - b * x1) / a;
                }

                if (!ok) break;

                v++;

                if (a > k / m) break;
                m *= a;
            }
        }

        cout << ans + (n - (n + v) / (v + 1)) << '\n';
    }

    return 0;
}