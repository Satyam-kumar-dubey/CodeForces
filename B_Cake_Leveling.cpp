
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

        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        cin>>v[i];

        ll s = 0;
        ll a = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            s += v[i];
            a = min(a, s / (i + 1));
            cout<<a<<" ";
        }
        cout<<"\n";
    }

}