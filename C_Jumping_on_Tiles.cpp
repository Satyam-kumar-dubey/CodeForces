#include <bits/stdc++.h>
using namespace std;

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

            if(min(st, en) <= val && val <= max(st, en))
                v.push_back({val, i + 1});
        }

        if(st <= en)
        {
            stable_sort(v.begin(), v.end(),
                        [](const auto &a, const auto &b)
                        {
                            return a.first < b.first;
                        });
        }
        else
        {
            stable_sort(v.begin(), v.end(),
                        [](const auto &a, const auto &b)
                        {
                            return a.first > b.first;
                        });
        }

        cout << abs(st - en) << " " << v.size() << '\n';

        for(auto &[val, idx] : v)
            cout << idx << " ";

        cout << '\n';
    }

    return 0;
}