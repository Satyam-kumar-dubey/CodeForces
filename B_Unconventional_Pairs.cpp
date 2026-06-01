
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

        sort(v.begin(),v.end());
        int a = INT_MIN;

        for(int i=1; i<n; i=i+2)
        a = max(a,v[i]-v[i-1]);

        cout<<a<<'\n';
    }
    
}
