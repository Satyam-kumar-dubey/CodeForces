
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int sz = (n * (n - 1)) / 2;
        vector<ll> b(sz);

        for(auto &x : b)
        cin >> x;

        vector<ll> v(n);
        sort(b.begin(), b.end());

        int it = 0, curr = 0;

        while(it < n - 1)
        {
            v[it] = b[curr];
            curr += (n - 1 - it);
            it++;
        }

        v[n - 1] = v[n - 2];

        for(auto &x : v)
        cout << x << " ";

        cout << '\n';
    }
}
