
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;

    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);

        for(auto &x : v)
        cin>>x;

        sort(v.begin(),v.end());
        vector<ll>ans(n);
        vector<ll>extra;

        ll l = 0, r = n-1;
        ll cnt = 0;

        for(ll i = 0; i<n; i++)
        {
            if(i == 0 || v[i] != v[i-1])
            {
                ans[l++] = v[i];     
                cnt++;
            }
            else if(i >= 2 && v[i] == v[i-2])
            {
                extra.push_back(v[i]);
            }
            else
            {
                ans[r--] = v[i];   
                cnt++;
            }
        }

        for(auto &x : extra)
        ans[l++] = x;

        cout<<cnt<<'\n';
        for(auto &x : ans)
        cout<<x<<" ";
        
        cout<<'\n';
    }
}