
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    vector<ll> v(n);
    for(int i = 0; i < n; ++i)
    cin>>v[i];

    vector<ll>a(n, 0);
    for(int i = 0; i < n; ++i)
    {
        vector<ll>fwd(n, 0);
        vector<ll>op(n, 0);

        ll c = 0;
        for(int j = 1; j < n; ++j)
        {
            int prev = (i + j - 1) % n;
            int cr = (i + j) % n;
            c = max(c, v[prev]);
            fwd[cr] = c;
        }

        c = 0;
        for(int j = 1; j < n; ++j)
        {
            int nxt = (i - j + 1 + n) % n;
            int cr = (i - j + n) % n;
            c = max(c, v[cr]);
            op[cr] = c;
        }

        ll w = 0;
        for(int j = 0; j < n; ++j)
        {
            if (j != i) 
            w += min(fwd[j], op[j]);
        }
        a[i] = w;
    }

    for(int i = 0; i < n; ++i)
    cout<<a[i]<<(i == n - 1 ? "" : " ");
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}