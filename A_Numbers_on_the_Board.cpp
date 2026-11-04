
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;

    while (t--)
    {
        int l, r;
        cin>>l>>r;

        int n = r - l + 1;

        if (l > 0 || r < 0)
        cout << n - 1 << '\n';
        else if (l == 0 || r == 0)
        cout << (n == 1 ? 0 : n - 2) << '\n';
        else {
            int a = -l, b = r;

            if (a == b)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << n - (2 * min(a, b) + 2) << '\n';
            }
        }
    }
}