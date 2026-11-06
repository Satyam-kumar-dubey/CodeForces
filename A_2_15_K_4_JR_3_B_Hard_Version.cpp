
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

        vector<ll> v(n);
        ll ttl = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;

            v[i] = 1LL << a;
            ttl += v[i];
        }
        sort(v.rbegin(), v.rend());  
        ll diff = 0;             

        for(ll x : v)
        diff = llabs(diff - x);
        
        cout<<((ttl * ttl - diff * diff) / 4)<<'\n';
    }

}