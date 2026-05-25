
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
        int n,c,d;
        cin>>n>>c>>d;

        vector<int>v(n*n);
        unordered_map<int,int>m;

        for(int i=0; i<n*n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }

        int mn = *min_element(v.begin(),v.end());

        bool f = true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int vl = mn+i*c + j*d;

                if(m[vl] == 0)
                {
                    f = false;
                    break;
                }
                m[vl]--;
            }
            if(!f)
            break;
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
