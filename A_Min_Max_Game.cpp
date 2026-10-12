
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int o = 0, z = 0;

        while (n--)
        {
            int a;
            cin >> a;

            if (a == 0)
            z++;
            else
            o++;
        }

        if (z > o)
        cout << "Elsie" << endl;
        else
        cout << "Bessie" << endl;
    }
}