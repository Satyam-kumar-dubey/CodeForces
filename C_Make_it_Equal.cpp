
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>s(n),t(n);
        for(int i=0; i<n; i++)
        cin>>s[i];
        for(int i=0; i<n; i++)
        cin>>t[i];

        vector<int>s_res, t_res;
        for(int i=0; i<n; i++)
        {
            int val = s[i] % k;
            s_res.push_back(min(val,k-val));
        }
        for(int i=0; i<n; i++)
        {
            int val = t[i] % k;
            t_res.push_back(min(val,k-val));
        }

        sort(s_res.begin(),s_res.end());
        sort(t_res.begin(),t_res.end());

        cout<<(s_res == t_res ? "YES" : "NO")<<'\n';
    }
}