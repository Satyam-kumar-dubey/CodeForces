
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
        
        vector<int>v(n);
        for(auto &x: v)
        cin>>x;

        set<ll>s;
        int cnt = 0;
        ll ps = 0;
        for(auto &x: v)
        {
            s.insert(x);
            ps += x;

            if(ps % 2 == 0)
            {
                if(s.count(ps/2))
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    
}
