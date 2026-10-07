
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &x : v)
        cin >> x;

        map<int, int> m;
        vector<int> val(n - 4);

        for (int i = 0; i < n - 4; i++)
        {
            val[i] = v[i] + v[i + 2] - v[i + 4];
        }

        ll ans = 0;

        for (int i = 0; i < n - 4; i++)
        {
            ans += m[val[i]];
            if (i >= 2 && val[i - 2] == val[i])
            ans--;

            if (i >= 4 && val[i - 4] == val[i])
            ans--;

            m[val[i]]++;
        }
        cout << ans << '\n';
    }
}