#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    
    for(int i=0; i<m; i++)
    cin>>v[i];

    sort(v.begin(),v.end());
    int r=INT_MAX;
    for(int i=0; i+n-1 <m; i++)
    r = min(r, v[i+n-1] - v[i]);
    cout<<r<<"\n";
}