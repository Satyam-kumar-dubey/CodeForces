
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

        vector<int>a(n);
        for(int i=0; i<n; i++)
        a[i] = n - v[i] + 1;
        
        for(int x : a)
        cout<<x<<" ";

        cout<<'\n';
    }
    
}
