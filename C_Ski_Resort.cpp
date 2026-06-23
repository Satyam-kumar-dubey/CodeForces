#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll holiday(const vector<int>& arr, int q, int k)
{
    int c = 0;
    ll tot = 0;
    int pi = 0, pe = 0;

    while (pe < arr.size())
    {
        if (arr[pe] <= q)
        {
            c++;
            pe++;
        }
        else
        {
            if (c >= k)
            {
                int r = pe - pi;
                ll n = r - k + 1;
                tot += n * (n + 1) / 2;
            }
            c = 0;
            pe++;
            pi = pe;
        }
    }

    if (pi != pe)
    {
        if (c >= k)
        {
            int r = pe - pi;
            ll n = r - k + 1;
            tot += n * (n + 1) / 2;
        }
    }

    return tot;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        cin >> arr[i];

        cout << holiday(arr, q, k) << '\n';
    }

    return 0;
}