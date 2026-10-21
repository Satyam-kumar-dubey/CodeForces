
#include<bits/stdc++.h>
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
        ll a, b;
        int n;
        cin>>a>>b>>n;

        ll tm = b;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            tm += min(x, a - 1);
        }

        cout<<tm<<'\n';
    }

}