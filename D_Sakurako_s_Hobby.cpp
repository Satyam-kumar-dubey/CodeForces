
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
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]--;
        }

        string s;
        cin>>s;

        vector<int>ans(n,-1);
        for(int i=0; i<n; i++)
        {
            if(ans[i] != -1)
            continue;

            int c = 0;
    
            int j = i;
            if(s[j] == '0')
            c++;

            j = v[j];
            while(j != i)
            {
                if(s[j] == '0')
                c++;
                j = v[j];
            }
            ans[j] = c;

            j = v[j];
            while(j != i)
            {
                ans[j] = c;
                j = v[j];
            }

        }
        for(auto &x : ans)
        cout<<x<<" ";
        cout<<'\n';
    }
    
}
