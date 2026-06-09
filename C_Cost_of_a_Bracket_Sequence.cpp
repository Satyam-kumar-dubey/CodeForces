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
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int> st;
        vector<pair<int,int>>p;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            st.push_back(i);
            else
            {
                if (!st.empty())
                {
                    p.push_back({st.back(), i});
                    st.pop_back();
                }
            }
        }

        int del = min(k, (int)p.size());

        string ans(n, '0');

        for(int i = 0; i < del; i++)
        ans[p[i].first] = '1';

        cout<<ans<<'\n';
    }
}