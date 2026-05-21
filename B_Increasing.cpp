
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

        sort(v.begin(),v.end());

        bool f = true;
        for(int i=1; i<n; i++)
        {
            if(v[i] <= v[i-1])
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
