
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;

        vector<int>v(26,0);
        vector<int>suf(n), pre(n);

        int d = 0;
        for(int i=0; i<n; i++)
        {
            char c = s[i];
            if(v[c-'a'] == 0)
            d++;

            v[c-'a']++;
            pre[i] = d;
        }
        fill(v.begin(),v.end(),0);

        d = 0;
        for(int i=n-1; i>=0; i--)
        {
            char c = s[i];
            if(v[c-'a'] == 0)
            d++;

            v[c-'a']++;
            suf[i] = d;
        }

        int a = 0;
        for(int i=0; i<n-1; i++)
        a = max(a, (pre[i]+suf[i+1]));

        cout<<a<<'\n';
    }
}