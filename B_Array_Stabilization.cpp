
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
    
    sort(v.begin(),v.end());
    int a1 = v[n-1] - v[1];
    int a2 = v[n-2] - v[0];
    cout<<min(a1,a2)<<'\n';
}
