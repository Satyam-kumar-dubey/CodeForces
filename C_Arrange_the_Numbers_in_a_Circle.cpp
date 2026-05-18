
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        ll o = 0, s = 0;
        vector<ll>v;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 1)
            o++;
            else 
            {
                v.push_back(x);
                s += x;
            }
        }

        ll res = 0;
        for (auto x : v)
        res = max(res, x + min(o, x / 2));

        if(v.size() >= 2)
        {
            ll tmp = 0;
            for (auto x : v)
            tmp += max(0LL, x / 2 - 1);
            res = max(res, s + min(o, tmp));
        }

        if (res < 3)
        res = 0;
        cout<<res<<'\n';
    }

}