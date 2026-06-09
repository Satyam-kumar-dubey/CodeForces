
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

        int c = 0;
        if(v[1] > v[0] && v[n-2] > v[n-1])
        {
            cout<<"NO"<<'\n';
            continue;
        }

        for(int i=1; i<n; i++)
        {
            
        }
    }
    
}
