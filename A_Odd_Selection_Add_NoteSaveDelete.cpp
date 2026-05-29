
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin>>n>>x;

        int od = 0, ev = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;

            if (a % 2)
            od++;
            else
            ev++;
        }

        bool f = false;

        for (int k = 1; k <= x; k += 2)
        {
            if (k <= od && (x - k) <= ev)
            {
                f = true;
                break;
            }
        }

        cout<<(f ? "Yes" : "No")<<'\n';
    }
}