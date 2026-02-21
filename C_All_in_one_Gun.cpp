#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;


using ll = long long;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin>>testCases;
    while(testCases--) {

        int n;
        ll h, k;
        cin>>n>>h>>k;

        vector<ll> a(n + 1);
        ll S = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            S += a[i];
        }

        ll m = h / S;
        ll rem = h % S;

        if (rem == 0) {
            ll ans = m * 1LL * n + (m - 1) * k;
            cout << ans << "\n";
            continue;
        }
        ll time = m * 1LL * (n + k);

        vector<ll> prefix(n + 1, 0), min_in(n + 1, (ll)4e18);
        for (int i = 1; i <= n; i++) 
        {
            prefix[i] = prefix[i - 1] + a[i];
            min_in[i] = min(min_in[i - 1], a[i]);
        }

        vector<ll>suffix(n + 2, 0);
        suffix[n] = a[n];

        for (int i = n - 1; i >= 1; i--) suffix[i] = max(suffix[i + 1], a[i]);
        suffix[n + 1] = 0;

        ll temp = n; 
        for (int it = 1; it <= n; it++)
        {
            ll bestprefixix = prefix[it];

            if (it < n) 
            {
                ll mx_out = suffix[it + 1];
                ll gain = mx_out - min_in[it];
                if (gain > 0) bestprefixix += gain;
            }

            if (bestprefixix >= rem) 
            {
                temp = it;
                break;
            }
        }

        cout<<time + temp<< "\n";
    }
    return 0;
}