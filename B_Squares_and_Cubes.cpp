
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
        ll n;
        cin >> n;

        ll s = sqrtl(n);

        ll c = cbrtl(n);
        while((c + 1) * (c + 1) * (c + 1) <= n)
        c++;
        while(c * c * c > n)
        c--;

        ll b = powl(n, 1.0L / 6);

        while(powl(b + 1, 6) <= n)
        b++;
        while(powl(b, 6) > n)
        b--;

        cout << (s + c - b) << '\n';
    }
}