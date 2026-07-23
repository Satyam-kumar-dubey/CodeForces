
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}
bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

void solve()
{
    int n,q;
    cin>>n>>q;

    vector<int>v(n);
    in(v);

    vector<pair<int,int>>qr(q);
    for(auto &x: qr)
    cin>>x.first>>x.second;

    sort(v.begin(),v.end());
    for(int i=0; i<q; i++)
    {
        vector<int>a;
        int it = n-1, val = qr[i].first;
        while(val--)
        {
            a.push_back(v[it]);
            it--;
        }

        sort(a.begin(),a.end());
        ll ans = 0;
        for(int j=0; j<qr[i].second; j++)
        ans += a[j];

        cout<<ans<<'\n';
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}
