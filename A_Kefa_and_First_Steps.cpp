
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int l = 0, s = 0, e = s+1;
    while(e < n)
    {
        if(v[e] < v[e-1])
        {
            l = max(l, e-s);
            s = e;
        }
        e++;
    }
    l = max(l, e-s);
    cout<<l<<'\n';
}
