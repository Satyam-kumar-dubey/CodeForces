
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(2 * n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x] = i;
        }

       ll a = 0;

        for (int x = 1; x <= 2 * n; x++)
        {
            if (!v[x])
            continue;

            for (int y = x + 1; x * y <= 2 * n; y++)
            {
                if (!v[y])
                continue;

                if (v[x] + v[y] == x * y)
                a++;
            }
        }

        cout<<a<<'\n';
    }

}