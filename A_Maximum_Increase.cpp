
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin>>n;

        vector<ll>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int s = 0, e = 1, a = 1;
        while(e < n)
        {
            if(v[e] > v[e-1])
            e++;
            else
            {
                a = max(a, e-s);
                s = e;
                e++;
            }
        }
        a = max(a, e-s);
        cout<<a<<'\n';
    
    
}
