
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
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        vector<int>np;
        for(int i=1; i<=n; i++)
        {
            if(!s.count(i))
            np.push_back(i);
        }

        vector<int>a;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            if(!m.count(v[i]))
            {
                a.push_back(v[i]);
                m[v[i]] = 1;
            }
            else
            {
                a.push_back(np.back());
                np.pop_back();
            }
        }
        for(auto &it : a)
        cout<<it<<" ";
        cout<<'\n';
    }
    
}
