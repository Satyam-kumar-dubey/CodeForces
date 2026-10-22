
#include <bits/stdc++.h>
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
        int n, m;
        ll h;
        cin>>n>>m>>h;

        vector<ll>a(n);
        for(int i = 0; i < n; i++)
        cin>>a[i];

        vector<ll>add(n, 0);
        vector<int>last(n, 0);

        int lst_idx = 0;

        for(int i = 1; i <= m; i++)
        {
            int b;
            ll c;
            cin>>b>>c;
            b--;

            if(last[b] < lst_idx)
            {
                add[b] = 0;
                last[b] = lst_idx;
            }

            add[b] += c;

            if(a[b] + add[b] > h)
            {
                lst_idx = i;
                add[b] = 0;
                last[b] = i;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(last[i] < lst_idx)
            add[i] = 0;

            cout<<a[i] + add[i]<< " ";
        }
        cout<<"\n";
    }

}
