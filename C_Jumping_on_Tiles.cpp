#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        int n = s.size();

        int st = s[0] - 'a' + 1;
        int en = s[n - 1] - 'a' + 1;

        vector<pair<int, int>> v;

        for(int i = 0; i < n; i++)
        {
            int val = s[i] - 'a' + 1;

            if (min(st, en) <= val && val <= max(st, en))
            v.push_back({val, i + 1});
        }

        if (st <= en)
        sort(v.begin(), v.end());
        else
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        cout << abs(st - en) << " " << v.size() << '\n';

        for (auto &[val, idx] : v)
        cout << idx << " ";
        cout << '\n';
    }

}