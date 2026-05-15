
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
        
        ll e = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] % 2 == 0)
            e++;
        }
        
        ll a = INT_MAX;
        for(ll i : v)
        {
            if(i % k ==0)
            a = 0;

            a = min(a, k - (i%k));
        }
        if(k == 4)
        {
            if(e >= 2)
            a = min(a,0LL);
            else if(e == 1)
            a = min(a,1LL);
            else
            a = min(a,2LL);
        }
        cout<<a<<'\n';
    }
}