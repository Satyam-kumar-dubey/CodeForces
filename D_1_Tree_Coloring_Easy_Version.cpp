#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> adj[200005];
int depth_count[200005];
int max_depth;

void dfs(int u, int p, int d) {
    depth_count[d]++;
    max_depth = max(max_depth, d);
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, d + 1);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        depth_count[i] = 0;
    }
    max_depth = 0;

    vector<int> children_count(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, 1);

    int max_width = 0;
    for (int i = 1; i <= n; i++) {
        max_width = max(max_width, depth_count[i]);
    }

    int max_children_plus_one = 0;
    for (int i = 1; i <= n; i++) {
        int children = (i == 1) ? adj[i].size() : adj[i].size() - 1;
        max_children_plus_one = max(max_children_plus_one, children + 1);
    }

    cout << max(max_width, max_children_plus_one) << endl;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}