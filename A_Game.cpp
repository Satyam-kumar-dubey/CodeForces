
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

    sort(v.begin(),v.end());
    int s = 0, e = n-1;
    int m = s + (e-s)/2;
    cout<<v[m]<<'\n';
    
}
