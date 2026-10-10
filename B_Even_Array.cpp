
#include<bits/stdc++.h>
using namespace std;

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

        int o = 0, e = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (i % 2 == 0 && a % 2 != 0)
            {
                o++;
            }
            else if (i % 2 != 0 && a % 2 == 0)
            {
                e++;
            }
        }

        if (o == e)
        {
            cout << o << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

}