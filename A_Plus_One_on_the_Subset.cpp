
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

        vector<ll>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int mx = *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(),v.end());

        cout<<(mx - mn)<<'\n';
    }
    
}
