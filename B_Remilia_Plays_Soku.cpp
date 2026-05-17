
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, x1, x2, k;
        cin>>n>>x1>>x2>>k;

        if (n <= 3)
        {
            cout<<1<<'\n';
            continue;
        }

        ll diff = abs(x1 - x2);
        ll d = min(diff, n - diff);

        cout<<d+k<<'\n';
    }

}