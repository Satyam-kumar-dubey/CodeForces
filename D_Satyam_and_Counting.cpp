
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
        int n;
        cin>>n;

        unordered_set<ll> xc, yc;

        for (int i = 0; i < n; i++)
        {
            ll x;
            int y;
            cin>>x>>y;

            if (y == 0)
            xc.insert(x);
            else
            yc.insert(x);
        }

        ll xcnt = xc.size();
        ll ycnt = yc.size();

        ll a = 0;

        for(auto x : xc)
        {
            if (yc.count(x))
            {
                a += (xcnt - 1);
                a += (ycnt - 1);
            }
        }

        for(auto x : yc)
        {
            if (xc.count(x - 1) && xc.count(x + 1))
            a++;
        }

        for (auto x : xc)
        {
            if (yc.count(x - 1) && yc.count(x + 1))
            a++;
        }
        cout<<a<<'\n';
    }

}