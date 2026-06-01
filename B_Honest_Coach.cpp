
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

        if(n == 2)
        {
            cout<<abs(v[1]-v[0])<<'\n';
            continue;
        }
        sort(v.begin(),v.end());

        int m = 0 + (n-1-0)/2;
        int p1 = abs(v[m]-v[m-1]);
        int p2 = abs(v[m]-v[m+1]);
        cout<<min(p1,p2)<<'\n';
    }
    
}
