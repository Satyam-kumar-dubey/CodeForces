
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
        for(auto &x: v)
        cin>>x;

        int sm = v[0];
        for(int i=1; i<n; i++)
        {
            if(v[i] > sm)
            v[i] = sm;
            else if(v[i] < sm)
            sm = v[i];
        }

        int a = 0;
        for(auto &x: v)
        a += x;

        cout<<a<<'\n';
    }
    
}
