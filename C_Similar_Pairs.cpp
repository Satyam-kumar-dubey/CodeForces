
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void in(vector<int> &v)
{
    for (auto &x : v)
    cin >> x;
}

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
        in(v);

        sort(v.begin(), v.end());

        int odd = 0, even = 0;

        for (int x : v)
        {
            if (x % 2)
            odd++;
            else
            even++;
        }

        if (odd % 2 == 0 && even % 2 == 0)
        {
            cout<<"YES\n";
            continue;
        }

        bool f = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] == 1)
            {
                f = true;
                break;
            }
        }

        cout << (f ? "YES" : "NO") << '\n';
    }
}