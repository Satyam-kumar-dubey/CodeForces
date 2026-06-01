
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

        vector<pair<int,int>>v(n);
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
            m[v[i].second] = i+1;
        }

        sort(v.begin(),v.end());
        int vl = INT_MIN;
        for(int i=n-1; i>=0; i--)
        {
            if(v[i].first <= 10)
            {
                vl = max(vl,v[i].second);
            }
        }
        cout<<m[vl]<<'\n';
    }
    
}
