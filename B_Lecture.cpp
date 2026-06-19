
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        int n,m;
        cin>>n>>m;

        map<string,string>mp;

        for(int i=0; i<m; i++)
        {
            string s1,s2;
            cin>>s1>>s2;

            mp[s1] = s2;
        }
        
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;

            if(mp[s].size() < s.size())
            cout<<mp[s]<<" ";
            else
            cout<<s<<" ";
        }
}
