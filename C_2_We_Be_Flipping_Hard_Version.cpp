
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

        vector<ll>v(n + 1);

        for(int i = 1; i <= n; i++)
        cin >> v[i];

        vector<int>a;

        int tmp = 0;

        for (int i = n; i >= 1; i--)
        {

            ll cr = v[i];
            if (tmp % 2)
            cr = -cr;

            if (cr < 0)
            {
                a.push_back(i);
                tmp ^= 1;
            }
        }

        cout<<a.size()<<'\n';

        for (int x : a)
        cout<<x<<' ';

        cout<<'\n';
    }
}