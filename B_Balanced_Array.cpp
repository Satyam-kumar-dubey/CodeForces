
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

        if(n%4 != 0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        
        vector<ll>v;
        for(ll i=2; i<=n; i=i+2)
        v.push_back(i);

        for(ll i=1; i<n-1; i=i+2)
        v.push_back(i);

        v.push_back(3*(n/2)-1);

        cout<<"YES"<<"\n";
        for(ll x : v)
        cout<<x<<" ";

        cout<<'\n';
        
    }
    
}
