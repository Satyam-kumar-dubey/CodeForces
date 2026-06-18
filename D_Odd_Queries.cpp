
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
        int n,q;
        cin>>n>>q;

        vector<ll>v(n);
        for(auto &x : v)
        cin>>x;

        vector<pair<pair<int,int>,int>>qr(q);
        for(auto &x : qr)
        {
            cin>>x.first.first>>x.first.second>>x.second;
            x.first.first--;
            x.first.second--;
        }

        vector<ll>ps(n);
        ps[0] = v[0];
        for(int i=1; i<n; i++)
        ps[i] = ps[i-1] + v[i];

        for(auto &[len,val] : qr)
        {
            auto &[st,en] = len;
            if(st > 0)
            {
                ll range = en - st + 1;
                st--;
                ll dif = ps[en] - ps[st];
                ll nsum = range * val;

                ll nval = nsum - dif;
                ll temp = ps[n-1] + nval;
                cout<<(temp % 2 == 1 ? "YES" : "NO")<<'\n';
            }
            else if(st == 0)
            {
                ll range = en - st + 1;
                ll dif = ps[en];
                ll nsum = range * val;

                ll nval = nsum - dif;
                ll temp = ps[n-1] + nval;
                cout<<(temp % 2 == 1 ? "YES" : "NO")<<'\n';
            }
        }
    }
    
}
