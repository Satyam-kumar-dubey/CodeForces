
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {
        ll x, y, n;
        cin >> x >> y >> n;

        ll k = ((n - y) / x) * x + y;
        cout << k << "\n";
    }
}