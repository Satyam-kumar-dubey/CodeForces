
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        ll x, y;
        cin>>x>>y;

        ll v = x - 2 * y;
        if (v < 0 || v % 3 != 0)
        {
            cout<<"NO\n";
            continue;
        }

        ll tp = v / 3;

        if (y < 0 && tp < 2 * (-y))
        cout << "NO\n";
        else
        cout << "YES\n";
    }

}