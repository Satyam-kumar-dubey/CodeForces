
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

        vector<int>v(n), vis(n,0);
        set<int>s;
        for(auto &x : v)
        {
            cin>>x;
        }
        
        s.insert(v[0]);
        vis[0] = 1;
        int sc = 0;
        for(int i=1; i<n; i++)
        {
            if(!vis[i] && s.count(v[i]))
            {
                sc++;
                vis[i] = 1;
            }
            s.insert(v[i]);
        }
        cout<<sc<<'\n';
    }
    
}
