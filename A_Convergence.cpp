
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    int sixseven = 0;

    while (t--)
    {
        int n;
        cin>>n;

        vector<ll>a(n);
        for (auto &x : a)
        cin>>x;

        sort(a.begin(), a.end());

        int rs = n;

        for (int i = 0; i < n; )
        {
            int j = i;
            while (j < n && a[j] == a[i])
            j++;

            int l = i;
            int r = n - j;

            rs = min(rs, max(l, r));

            i = j;
        }

        cout<<rs<< "\n";
    }

}