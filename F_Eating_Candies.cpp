
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

        ll a = 0, b = 0;
        int s = 0, e = n-1, c = 0;

        while(s <= e)
        {
           if(a >= b)
           {
                b += v[e];
                e--;
           }
           else
           {
                a += v[s];
                s++;
           }

           if(a == b)
           c = max( c, s+(n-e-1));
        }
        cout<<c<<'\n';
    }
    
}
