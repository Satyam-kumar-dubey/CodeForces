
#include<bits/stdc++.h>
using namespace std;

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
        for(auto &x : v)
        cin>>x;

        if(v[0] == 1)
        v[0] += 1;
        
        for(int i=1; i<n; i++)
        {
            if(v[i] == 1)
            v[i]++;
            if(v[i] % v[i-1] == 0)
            v[i]++;
            
        }

        
        for(auto &x : v)
        cout<<x<<" ";

        cout<<'\n';
    }
}