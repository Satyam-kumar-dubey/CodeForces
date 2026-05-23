
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
        int n;
        cin>>n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];

        for (int i = 0; i < n; i++)
        cin >> b[i];

        ll sm = 0;
        ll tmp = 0;

        for (int i = 0; i < n; i++)
        {
            sm += max(a[i], b[i]);
            tmp = max(tmp, min(a[i], b[i]));
        }

        cout<<sm + tmp<<'\n';
    }

}