
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

        ll a = 0;

        map<string,int>m;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;

            for(char j='a'; j<='k'; j++)
            {
                if(j == s[0])
                continue;

                string tp = s;
                tp[0] = j;
                if(m[tp])
                a += m[tp];
            }
            for(char j='a'; j<='k'; j++)
            {
                if(j == s[1])
                continue;

                string tp = s;
                tp[1] = j;
                if(m[tp])
                a += m[tp];
            }
            m[s]++;
        }
        cout<<a<<'\n';
    }
    
}
