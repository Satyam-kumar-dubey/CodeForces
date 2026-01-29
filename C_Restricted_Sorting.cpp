#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>

using namespace std;

static bool isSorted(const vector<long long>& a) {
    for (int i = 1; i < (int)a.size(); i++)
        if (a[i] < a[i - 1]) return false;
    return true;
}

// DSU "next" structure to iterate unvisited indices fast
struct NextDSU {
    int n;
    vector<int> p;
    NextDSU(int n=0){ init(n); }
    void init(int n_) {
        n = n_;
        p.resize(n + 1);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x) {
        if (x > n) return n;
        return p[x] == x ? x : p[x] = find(p[x]);
    }
    // remove x from set: link to x+1
    void erase(int x) {
        p[x] = find(x + 1);
    }
};

static bool possible(const vector<long long>& a, long long k) {
    int n = (int)a.size();

    vector<pair<long long,int>> vp(n);
    for (int i = 0; i < n; i++) vp[i] = {a[i], i};
    sort(vp.begin(), vp.end());

    vector<long long> val(n);
    vector<int> tokenAtPos(n);
    for (int id = 0; id < n; id++) {
        val[id] = vp[id].first;
        tokenAtPos[vp[id].second] = id;
    }

    vector<int> comp(n, -1);
    NextDSU dsu(n);              // indices 0..n-1, plus sentinel n
    queue<int> q;
    int cid = 0;

    auto takePrefix = [&](int L) {
        int x = dsu.find(0);
        while (x < n && x <= L) {
            dsu.erase(x);
            comp[x] = cid;
            q.push(x);
            x = dsu.find(x); // after erase, find(x) gives next alive
        }
    };

    auto takeSuffix = [&](int R) {
        int x = dsu.find(R);
        while (x < n) {
            dsu.erase(x);
            comp[x] = cid;
            q.push(x);
            x = dsu.find(x);
        }
    };

    while (true) {
        int s = dsu.find(0);
        if (s >= n) break;

        dsu.erase(s);
        comp[s] = cid;
        q.push(s);

        while (!q.empty()) {
            int u = q.front(); q.pop();

            long long leftVal = val[u] - k;
            long long rightVal = val[u] + k;

            int L = (int)(upper_bound(val.begin(), val.end(), leftVal) - val.begin()) - 1;
            int R = (int)(lower_bound(val.begin(), val.end(), rightVal) - val.begin());

            if (L >= 0) takePrefix(L);
            if (R < n) takeSuffix(R);
        }

        cid++;
    }

    for (int i = 0; i < n; i++) {
        if (comp[i] != comp[tokenAtPos[i]]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (isSorted(a)) {
            cout << -1 << "\n";
            continue;
        }

        if (!possible(a, 1)) {   // if no positive k works
            cout << -1 << "\n";
            continue;
        }

        long long lo = 1, hi = 1000000000LL, ans = 1;
        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (possible(a, mid)) ans = mid, lo = mid + 1;
            else hi = mid - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
