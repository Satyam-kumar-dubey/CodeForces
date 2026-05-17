#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        map<int,int> f;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                f[x]++;
            }
        }

        bool fl = true;

        for(auto [color, c] : f)
        {
            if(c > n * (n - 1))
            {
                fl = false;
                break;
            }
        }

        cout << (fl ? "YES" : "NO") << '\n';
    }
}