
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

        vector<ll>a(n);
        for (int i = 0; i < n; i++)
        cin>>a[i];

        vector<ll>b;

        for(int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
            b.push_back(a[i]);
        }

        int s = b.size();
        int cnt = 0;

        for (int i = 0; i < s; i++)
        {
            bool l = (i == 0 || b[i - 1] > b[i]);
            bool r = (i == s - 1 || b[i + 1] > b[i]);

            if(l && r)
            cnt++;
        }

        cout<<(cnt == 1 ? "YES" : "NO")<<'\n';
    }
}