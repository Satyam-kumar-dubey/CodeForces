
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
    for(auto &x : v)
    cin>>x;

    sort(v.begin(),v.end());
    for(auto &x : v)
    cout<<x<<" ";
    cout<<'\n';
    
}
