
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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
        vector<vector<int>>v(n);

        int mx = 0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            mx = max(mx,a);

            v[i].resize(a);
            for(int j=0; j<a; j++)
            cin>>v[i][j];
        }
        sort(v.begin(),v.end());

        vector<vector<int>>nw(n,vector<int>(mx,1e9));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v[i].size(); j++)
            nw[i][j] = v[i][j];
        }

        int s = INT_MAX;
        for(int i=0;i<n;i++)
        s = min(s, (int)v[i].size());

        vector<int>ans;

        for(int i=0; i<s; i++)
        ans.push_back(nw[0][i]);

        for(int j = s; j < mx; j++)
        {
            int tp = INT_MAX;
            for(int i = 0; i < n; i++)
            tp = min(tp, nw[i][j]);

            ans.push_back(tp);
        }

        for(int x : ans)
        cout<<x<<" ";
        cout<<"\n";
    }
}