
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
        int n;
        cin>>n;
        vector<ll>v(n);

        for(auto &x : v)
        cin>>x;

        ll a = 0;
        if(v[0] > v[1])
        {
            a += v[0] - v[1];
            v[0] = v[1];
        }

        for(int i=2; i<n; i=i+2)
        {
            ll d = v[i-1] - v[i-2];
            if(i < n-1)
            d = min(d,v[i+1]);

            if(v[i] > d)
            {
                a += v[i] - d;
                v[i] = d;
            }
        }
        cout<<a<<'\n';
    }

}
