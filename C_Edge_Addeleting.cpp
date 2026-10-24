
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n, m;
        cin>>n>>m;

        vector<vector<int>>adj(n + 1);
        for (int i=0; i<n - 1; i++)
        {
            int x, y;
            cin>>x>>y;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        vector<int> dist(n + 1, -1);
        queue<int> q;

        dist[n] = 0;
        q.push(n);

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            if (node == 1)
            continue;

            for (int w : adj[node])
            {
                if (dist[w] == -1)
                {
                    dist[w] = dist[node] + 1;
                    q.push(w);
                }
            }
        }

        int ans = dist[1];
        for (int i=0; i<m; i++)
        {
            int v;
            cin>>v;

            if(dist[v] != -1)
            ans = max(ans, dist[v] + 1);
        }
        cout<<ans<<"\n";
    }
}