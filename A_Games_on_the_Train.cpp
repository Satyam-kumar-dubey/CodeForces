
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
        for(auto &x : v)
        cin>>x;

        int mx = *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(),v.end());

        cout<<(mx - mn) + 1<<'\n';
    }
    
}
