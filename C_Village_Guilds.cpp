
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n + 1);
    for (int i = 2; i <= n; ++i)
    {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }
    
    vector<int> tin(n + 1), tout(n + 1), depth(n + 1);
    vector<vector<int>> depth_nodes(n + 1);
    int timer = 0;
    
    auto dfs = [&](auto& self, int u, int d) -> void {
        depth[u] = d;
        tin[u] = ++timer;
        depth_nodes[d].push_back(u);
        for (int v : adj[u]) {
            self(self, v, d + 1);
        }
        tout[u] = timer;
    };
    
    dfs(dfs, 1, 0);
    
    long long total_unique_guilds = 0;
    
    // Process each absolute depth layer
    for (int d = 0; d <= n; ++d) {
        if (depth_nodes[d].empty()) continue;
        
        // depth_nodes[d] is already sorted by tin because DFS visits them in tin order
        vector<int>& nodes_at_d = depth_nodes[d];
        vector<int> tins_at_d;
        for (int u : nodes_at_d) {
            tins_at_d.push_back(tin[u]);
        }
        
        vector<pair<int, int>> intervals;
        
        // For each node u that could be an ancestor of nodes at depth d
        // Node u must be at depth <= d
        for (int h = 0; h <= d; ++h) {
            for (int u : depth_nodes[d - h]) {
                // Find the range of descendants of u at depth d
                int l_bound = tin[u];
                int r_bound = tout[u];
                
                auto lit = lower_bound(tins_at_d.begin(), tins_at_d.end(), l_bound);
                auto rit = upper_bound(tins_at_d.begin(), tins_at_d.end(), r_bound);
                
                if (lit != rit) {
                    int L = distance(tins_at_d.begin(), lit);
                    int R = distance(tins_at_d.begin(), rit) - 1;
                    intervals.push_back({L, R});
                }
            }
        }
        
        // Count unique intervals at this depth
        sort(intervals.begin(), intervals.end());
        intervals.erase(unique(intervals.begin(), intervals.end()), intervals.end());
        
        total_unique_guilds += intervals.size();
    }
    
    cout << total_unique_guilds << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}