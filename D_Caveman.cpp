
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        vector<int>adj(n, 0);

        for (int i=0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            --u;
            --v;
            adj[u]++;
            adj[v]++;
        }

        bool fl = false;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (adj[i] == 0)
            fl = true;
            cnt = max(cnt, adj[i]);
        }

        if(fl)
        cout<<"Brain Melt"<<'\n';
        else if (m == n - 1 && cnt == n - 1) 
        cout<<2<<'\n';
        else
        cout<<"Many"<<'\n';
    }
}