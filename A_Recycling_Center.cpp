
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n, c;
        cin>>n>>c;

        vector<ll>v(n);

        for(ll i = 0; i < n; i++)
        cin >> v[i];

        vector<int> a;

        for(ll i = 0; i < n; i++)
        {
            if(v[i] > c)
            {
                a.push_back(-1);
                continue;
            }

            ll cr = v[i];
            int d = 0;

            while(cr <= c / 2)
            {
                cr *= 2;
                d++;
            }
            a.push_back(d);
        }

        sort(a.begin(), a.end());

        int cst = 0, f = 0;

        for(int d : a)
        {
            if(d >= cst)
            {
                f++;
                cst++;
            }
        }

        cout<<(n - f)<<'\n';
    }
}