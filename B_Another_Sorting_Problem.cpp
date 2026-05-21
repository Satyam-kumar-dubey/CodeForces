
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

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

        vector<ll> a(n);

        for(int i = 0; i < n; i++)
        cin >> a[i];

        ll k = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            k = max(k, a[i] - a[i+1]);
        }
        if(k == 0)
        {
            cout << "YES\n";
            continue;
        }

        bool v[2] = {true, false};

        for(int i = 0; i < n-1; i++)
        {
            bool hlp[2] = {false, false};

            for(int x = 0; x <= 1; x++)
            {
                if(!v[x]) continue;
                for(int y = 0; y <= 1; y++)
                {
                    ll l = a[i] + (x*k);
                    ll r = a[i+1] + (y*k);

                    if(l <= r)
                    hlp[y] = true;
                }
            }
            v[0] = hlp[0];
            v[1] = hlp[1];
        }
        cout << ((v[0] || v[1]) ? "YES" : "NO") << '\n';
    }
}