
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<ll>v(n);
        for(auto &x : v)
        cin>>x;

        vector<ll>p(n);
        p[0] = v[0];
        for(int i=1; i<n; i++)
        p[i] = p[i-1] + v[i];

        vector<ll>r(n);
        for(int i=0; i<n; i++)
        r[i] = p[i]%k;

        vector<ll>fr(n+1,0);
        ll ans = 0;
        for (int i = k; i < n; i++)
        {
            if (i == k)
            fr[0]++;
            else
            fr[r[i - k - 1]]++;

            ans += fr[r[i]];
        }
        cout<<ans<<'\n';
    }
}