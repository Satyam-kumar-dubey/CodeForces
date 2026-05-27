
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,t;
    cin>>n>>t;

    vector<int>v(n);
    for(int i=1; i<=n-1; i++)
    cin>>v[i];

    int cr = 1;

    while(cr < t)
    cr += v[cr];
    
    cout<<(cr == t ? "YES" : "NO")<<'\n';
}
