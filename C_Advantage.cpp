
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

        ll b = *max_element(v.begin(),v.end());
        ll sb = -1;
        for(ll i=0; i<n; i++)
        {
            if(v[i] != b)
            sb = max(sb,v[i]);
        }

        for(ll i=0; i<n; i++)
        {
            if(v[i] == b)
            {
                if(sb == -1)
                cout<<0<<" ";
                else
                cout<<v[i]-sb<<" ";
            }
            else 
            cout<<v[i] - b<<" ";
        }
        cout<<"\n";
    }
    
}
