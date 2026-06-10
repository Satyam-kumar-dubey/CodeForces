
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
        int n,k;
        string s;
        cin>>n>>k>>s;

        vector<int>o(n + 1),c(n + 1);
        for (int i = 0; i < n; i++)
        {
            o[i + 1] = o[i];
            c[i + 1] = c[i];

            if(s[i] == '(')
            o[i + 1]++;
            else
            c[i + 1]++;
        }

        int temp = c[n];
        int mini = n+1;
        int p = 0;

        for(int i = 0; i <= n; i++)
        {
            int cr = o[i]+(temp - c[i]);

            if (cr < mini)
            {
                mini = cr;
                p = i;
            }
        }

        int del = min(k, mini);
        string ans(n, '0');

        for (int i = 0; i < p && del; i++)
        {
            if (s[i] == '(')
            {
                ans[i] = '1';
                del--;
            }
        }

        for(int i = n - 1; i >= p && del; i--)
        {
            if (s[i] == ')')
            {
                ans[i] = '1';
                del--;
            }
        }
        cout<<ans<<'\n';
    }
}