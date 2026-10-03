
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

        ll sm = 0;
        vector<ll>v(n);
        for(auto &x: v)
        {
            cin>>x;
            sm += x;
        }

        if(n == 1)
        {
            cout<<"YES"<<'\n';
            continue;
        }

        ll val = sm / n;
        ll cst = 0;
        bool f = true;
        for(auto x : v)
        {
            if(x > val)
            cst += (x - val);
            else if(x < val)
            {
                ll need = val - x;
                if(cst >= need)
                cst -= need;
                else
                {
                    f = false;
                    break;
                }
            }
        }
        cout<<(f == false ? "NO" : "YES")<<'\n';
        
    }
}