
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
        for(auto &x : v)
        cin>>x;

        sort(v.begin(),v.end());
        ll l = 1, c = 1;
        
        for(int i=1; i<n; i++)
        {
            if((v[i] - v[i-1]) <= k)
            c++;
            else
            c = 1;

            l = max(l,c);
        }
        cout<<(n-l)<<'\n';
    }
    
}
