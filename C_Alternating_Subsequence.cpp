
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        cin>>v[i];

        ll s = 0, mx = v[0];
        for(int i=1; i<n; i++)
        {
            if((v[i]>0) == (v[i-1]>0))
            mx = max(mx,v[i]);
            else
            {
                s += mx;
                mx = v[i];
            }
        }
        s += mx;
        cout<<s<<'\n';
    }
    
}
