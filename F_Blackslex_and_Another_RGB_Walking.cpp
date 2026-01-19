#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

void solve_agent() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for(int i=0; i<m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> dist(n + 1, -1);
    queue<int> q;
    dist[1] = 0;
    q.push(1);
    
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    string res = "";
    for(int i=1; i<=n; ++i){
        if(dist[i] % 3 == 0) res += 'r';
        else if(dist[i] % 3 == 1) res += 'g';
        else res += 'b';
    }
    cout << res << endl;
}

void solve_blackslex() {
    int q_count; cin >> q_count;
    while(q_count--) {
        int deg; cin >> deg;
        string neighbors; cin >> neighbors;
        
        // Identify which colors are present
        bool has_r = false, has_g = false, has_b = false;
        for(char c : neighbors) {
            if(c == 'r') has_r = true;
            if(c == 'g') has_g = true;
            if(c == 'b') has_b = true;
        }

        char move_to;
        // The Cycle: r(0) -> g(1) -> b(2) -> r(0)
        // If we see R and G, and we aren't R or G ourselves, 
        // we must be B. Closer to start is G.
        if (has_r && has_g && !has_b) move_to = 'r'; // We are G(1), move to R(0)
        else if (has_g && has_b && !has_r) move_to = 'g'; // We are B(2), move to G(1)
        else if (has_b && has_r && !has_g) move_to = 'b'; // We are R(0), move to B(2)
        else {
            // If only one color is seen, it must be the parent color
            move_to = neighbors[0];
        }

        for(int i=0; i<deg; ++i) {
            if(neighbors[i] == move_to) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}

int main() {
    string mode; cin >> mode;
    int t; cin >> t;
    while(t--) {
        if(mode == "first") solve_agent();
        else solve_blackslex();
    }
    return 0;
}