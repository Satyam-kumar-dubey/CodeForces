
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
        ll f,a,b;
        cin>>n>>f>>a>>b;

        vector<ll>v(n);
        for(auto &x : v)
        cin>>x;

        f -= min((v[0]*a) , b);
        if(f <= 0)
        {
            cout<<"NO"<<'\n';
            continue;
        }

        bool fl = false;
        for(int i=1; i<n; i++)
        {
            ll val = v[i] - v[i-1];
            ll cst = val * a;
            f -= min(cst, (ll)b);

            if(f <= 0)
            {
                fl = true;
                break;
            }
        }
        cout<<(fl ? "NO" : "YES")<<'\n';
    }
    
}
