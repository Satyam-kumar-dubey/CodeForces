#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <cmath>

using namespace std;

struct DSU {
    vector<int> parent, sz;
    DSU(int n) : parent(n), sz(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    long long unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return 0;

        long long before = 1LL * sz[a] * (sz[a] + 1) / 2
                          + 1LL * sz[b] * (sz[b] + 1) / 2;

        parent[b] = a;
        sz[a] += sz[b];

        long long after = 1LL * sz[a] * (sz[a] + 1) / 2;
        return after - before;
    }
};

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        // Build difference array
        vector<pair<int,int>> diff;
        for (int i = 0; i < n - 1; i++) {
            diff.push_back({abs(p[i] - p[i+1]), i});
        }

        // Sort differences descending
        sort(diff.rbegin(), diff.rend());

        DSU dsu(n - 1);
        vector<bool> active(n - 1, false);
        vector<long long> ans(n, 0);

        long long cur = 0;
        int ptr = 0;

        // Process k from n-1 down to 1
        for (int k = n - 1; k >= 1; k--) {
            while (ptr < (int)diff.size() && diff[ptr].first >= k) {
                int idx = diff[ptr].second;
                active[idx] = true;
                dsu.sz[idx] = 1;
                cur += 1; // new segment of length 1

                if (idx > 0 && active[idx - 1])
                    cur += dsu.unite(idx, idx - 1);

                if (idx + 1 < n - 1 && active[idx + 1])
                    cur += dsu.unite(idx, idx + 1);

                ptr++;
            }
            ans[k] = cur;
        }

        // Output answers for k = 1 to n-1
        for (int k = 1; k <= n - 1; k++) {
            cout << ans[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
