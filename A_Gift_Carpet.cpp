
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
        int n,m;
        cin>>n>>m;
        vector<string>v(n);

        for(int i=0; i<n; i++)
        cin>>v[i];

        string g = "vika";
        int it = 0;

        for(int i=0; i<m && it <4; i++)
        {
            bool f = false;
            for(int j=0; j<n; j++)
            {
                if(v[j][i] == g[it])
                {
                    f = true;
                    break;
                }
            }
            if(f)
            it++;
        }
        cout<<(it == 4 ? "YES" : "NO")<<'\n';
    }
    
}
