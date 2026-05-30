
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
        int n,m,k;
        cin>>n>>m>>k;

        vector<int>a(n),b(m);
        set<int>f,s;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] <= k)
            f.insert(a[i]);
        }

        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            if(b[i] <= k)
            s.insert(b[i]);
        }

        int fc = 0, sc = 0 , bc = 0;
        bool fl = true;
        for(int i=1; i<=k; i++)
        {
            if(!f.count(i) && !s.count(i))
            {
                fl = false;
                break;
            }
            if(f.count(i) && !s.count(i))
            fc++;
            else if(!f.count(i) && s.count(i))
            sc++;
            else
            bc++;
        }
        if(!fl || fc > k/2 || sc > k/2)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    
}
