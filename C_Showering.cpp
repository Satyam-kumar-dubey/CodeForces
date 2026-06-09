
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
        int n,s,m;
        cin>>n>>s>>m;

        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i].first>>v[i].second;

        if(v[0].first - 0 >= s || m - v[n-1].second >= s)
        {
            cout<<"YES"<<'\n';
            continue;
        }

        bool f = false;
        for(int i=1; i<n; i++)
        {
            if(v[i].first - v[i-1].second >= s)
            {
                f = true;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
