#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int noTsts;
    cin >> noTsts;

    while(noTsts--)
    {
        int n;
        cin >> n;
        vector<vector<int>> g(n + 1);
        for(int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        int LOG = 1;
        while((1 << LOG) <= n) LOG++;
        vector<vector<int>> up(LOG, vector<int>(n + 1, 0));
        vector<int> dep(n + 1, 0), order;
        order.reserve(n);

        // iterative DFS/BFS from root 1
        vector<int> st = {1};
        up[0][1] = 0;
        while(!st.empty())
        {
            int v = st.back(); st.pop_back();
            order.push_back(v);
            for(int to : g[v])
            {
                if(to == up[0][v]) continue;
                up[0][to] = v;
                dep[to] = dep[v] + 1;
                st.push_back(to);
            }
        }
        for(int j = 1; j < LOG; j++)
            for(int v = 1; v <= n; v++)
                up[j][v] = up[j - 1][up[j - 1][v]];

        auto lca = [&](int a, int b)
        {
            if(dep[a] < dep[b]) swap(a, b);
            int diff = dep[a] - dep[b];
            for(int j = 0; j < LOG; j++)
                if((diff >> j) & 1) a = up[j][a];
            if(a == b) return a;
            for(int j = LOG - 1; j >= 0; j--)
                if(up[j][a] != up[j][b])
                {
                    a = up[j][a];
                    b = up[j][b];
                }
            return up[0][a];
        };

        vector<int> cands;
        if(n % 2 == 0) cands = {n + 1};
        else cands = {n, n + 1, n + 2};

        int bestK = cands[0], bestCover = -1;
        for(int k : cands)
        {
            vector<int> s(n + 1, 0);
            for(int i = max(1, k - n); i < k - i; i++)
            {
                int a = i, b = k - i;
                int l = lca(a, b);
                s[a]++;
                s[b]++;
                s[l]--;
                s[up[0][l]]--;
            }
            int cover = 0;
            for(int idx = n - 1; idx >= 0; idx--)
            {
                int v = order[idx];
                if(s[v] > 0) cover++;
                s[up[0][v]] += s[v];
            }
            if(cover > bestCover)
            {
                bestCover = cover;
                bestK = k;
            }
        }
        cout << bestK << '\n';
    }
}