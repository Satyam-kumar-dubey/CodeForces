#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        vector<int> boxes(m);
        for (int i = 0; i < m; i++) cin >> boxes[i];

        vector<int> x(n), y(n), z(n);
        long long total_y = 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i] >> z[i];
            total_y += y[i];
        }

        long long remaining_coins = k - total_y;
        if (remaining_coins < 0) remaining_coins = 0;

        // Sort boxes descending by beauty
        sort(boxes.rbegin(), boxes.rend());

        // Sort friends by descending x[i] (box requirement)
        vector<int> idx(n);
        vector<int> idx(n);
for (int i = 0; i < n; i++) {
    idx[i] = i;
}

        sort(idx.rbegin(), idx.rend(), [&](int a, int b) {
            return x[a] < x[b]; // larger x first
        });

        int happy = 0;
        int box_idx = 0;

        for (int i = 0; i < n; i++) {
            int id = idx[i];

            // Try to assign a box
            while (box_idx < m && boxes[box_idx] >= x[id]) {
                box_idx++;
                happy++;
                break next_friend;
            }

            // No box available, try to spend extra coins
            long long extra_needed = z[id] - y[id];
            if (extra_needed <= remaining_coins) {
                remaining_coins -= extra_needed;
                happy++;
            }

            next_friend:;
        }

        cout << happy << "\n";
    }

    return 0;
}

