
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll>v(n), rev(n);
        for(auto &x : v)
        cin>>x;

        ll res = LLONG_MAX;
        for(int i=1; i<n; i++)
        res = min(res, abs(v[i]-v[i-1]));

        rev = v;
        reverse(rev.begin(), rev.end());
        for(auto &x : rev)
        x = 2*x;

        ll ans = LLONG_MAX;
        for(int i=1; i<n; i++)
        ans = min(ans, abs(rev[i]-rev[i-1]));

        cout<<min(ans,res)<<'\n';

    }
}