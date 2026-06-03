
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
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        vector<int>f(n+2,0);
        for(int x : v)
        f[x]++;

        int m = 0;
        for(int i=0; i<k; i++)
        {
            if(f[i] == 0)
            m++;
        }
        
        int tr = f[k];
        cout<<max(m,tr)<<'\n';
    }
    
}
