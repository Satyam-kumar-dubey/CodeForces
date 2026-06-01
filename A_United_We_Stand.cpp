
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
        cin>>v[i];
        
        bool f = true;
        for(int i=1; i<n; i++)
        {
            if(v[i] != v[i-1])
            {
                f = false;
                break;
            }
        }

        if(f)
        {
            cout<<-1<<'\n';
            continue;
        }
        sort(v.begin(),v.end());
        vector<int>a,b;
        
        b.push_back(v[n-1]);
        int id = -1;
        for(int i=n-2; i>=0; i--)
        {
            if(v[i] == b.back())
            b.push_back(v[i]);
            else
            {
                id = i;
                break;
            }
        }
        for(int i=0; i<=id; i++)
        a.push_back(v[i]);

        for(int x : a)
        cout<<x<<" ";
        cout<<'\n';

        for(int x : b)
        cout<<x<<" ";
        cout<<'\n';
    }
    
}
