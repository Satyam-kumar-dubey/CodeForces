
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
        string s,f;
        cin>>s>>f;

        int c1 = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1' && f[i] != '1')
            c1++;
        }
        int c2 = 0;
        for(int i=0; i<n; i++)
        {
            if(f[i]=='1' && s[i] != '1')
            c2++;
        }

        cout<<max(c1,c2)<<'\n';
    }
    
}

