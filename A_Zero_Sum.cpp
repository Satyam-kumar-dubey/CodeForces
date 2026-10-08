#include<bits/stdc++.h>
using namespace std;

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

        vector<int> v(n);
        int one = 0, negOne = 0;

        for(auto &x : v)
        {
            cin >> x;

            if(x == 1)
            one++;
            else
            negOne++;
        }

        if(n % 2 == 0 && negOne % 2 == (n / 2) % 2)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
