
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
        int n,x,s;
        string st;
        cin>>n>>x>>s>>st;

        vector<vector<char>>v(x + 1,vector<char>(n + 1, 0));
        v[0][0] = 1;

        for(char c : st)
        {
            vector<vector<char>>tmp = v;

            for (int i = 0; i <= x; i++)
            {
                for (int j = 0; j <= n; j++)
                {
                    if (!v[i][j])
                    continue;

                    if (c == 'I')
                    {
                        if (i < x)
                        tmp[i + 1][j + 1] = 1;
                    }
                    else if (c == 'E')
                    {
                        if (j < i * s)
                        tmp[i][j + 1] = 1;
                    }
                    else
                    { 
                        if (i < x)
                        tmp[i + 1][j + 1] = 1;
                        if (j < i * s)
                        tmp[i][j + 1] = 1;
                    }
                }
            }
            v.swap(tmp);
        }

        int a = 0;
        for (int i = 0; i <= x; i++) {
            for (int j = 0; j <= n; j++) {
                if (v[i][j]) {
                    a = max(a, j);
                }
            }
        }
        cout<<a<<'\n';
    }
}