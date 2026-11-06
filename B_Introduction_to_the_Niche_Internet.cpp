
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
        int n, k;
        cin>>n>>k;

        vector<ll> a(n);

        for (auto &x : a)
        cin >> x;

        sort(a.rbegin(), a.rend());

        int c = 0;

        while (c < n && a[c] == a[0])
        c++;

        if(k < c)
        {
            cout << "NO\n";
            continue;
        }

        vector<ll> res;

        int val = k - c;
        for (int i = c + val - 1; i >= c; i--)
        res.push_back(a[i]);

        for (int i = 0; i < c; i++)
        res.push_back(a[i]);

        for (int i = c + val; i < n; i++)
        res.push_back(a[i]);

        cout<<"YES"<<"\n";

        for(auto x : res)
        cout<<x<<" ";

        cout<<"\n";
    }

}
