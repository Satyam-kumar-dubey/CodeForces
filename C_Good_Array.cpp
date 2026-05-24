
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    

    
    
        ll n;
        cin>>n;

        vector<ll>v(n);
        map<ll,ll>m;
        ll sm = 0;

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            m[v[i]] = i+1;
            sm += v[i];
        }

        vector<ll>a;
        for(ll i =0; i<n; i++)
        {
            ll tp = sm - v[i];
            if(tp % 2 == 0)
            {
                tp /= 2;
                if(m.count(tp) && m[tp] != m[v[i]])
                a.push_back(i+1);
            }
        }
        cout<<a.size()<<'\n';
        for(int x : a)
        cout<<x<<" ";

        cout<<'\n';
    
    
}
