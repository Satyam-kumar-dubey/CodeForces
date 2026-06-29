
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

        vector<vector<char>>v(n,vector<char>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            cin>>v[i][j];
        }

        int l = -1, r = -1, up = -1, btm = -1;
        bool f = true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(v[i][j] == '#')
                {
                    up = i;
                    l = j;
                    f = false;
                    break;
                }
            }
            if(!f)
            break;
        }
        up++;
        l++;
        f = true;
        for(int i=n-1; i >= 0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                if(v[i][j] == '#')
                {
                    btm = i;
                    r = j;
                    f = false;
                    break;
                }
            }
            if(!f)
            break;
        }
        btm++;
        r++;
        cout<<(up + btm)/2 <<" "<<(l + r)/2 <<'\n';
    }
    
}
