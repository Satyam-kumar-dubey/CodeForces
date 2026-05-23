
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

        int mn = INT_MAX, mx = INT_MIN;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mn = min(mn,v[i]);
            mx = max(mx,v[i]);
        }
        cout<<(mx-mn+1)/2<<"\n";
    }
    
}
