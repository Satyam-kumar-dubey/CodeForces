
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector<int> dp(n + 1, 1e9);

        dp[0] = 0;
        dp[1] = (a[0] != b[0]);   // vertical pair on first column

        for (int i = 2; i <= n; i++) {
            // Option 1: use column i alone as a vertical pair
            dp[i] = min(dp[i], dp[i - 1] + (a[i - 1] != b[i - 1]));

            // Option 2: use columns i-1 and i as two horizontal pairs
            dp[i] = min(dp[i], dp[i - 2]
                              + (a[i - 2] != a[i - 1])
                              + (b[i - 2] != b[i - 1]));
        }

        cout << dp[n] << '\n';
    }

    return 0;
}