
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,m,a;
    cin>>n>>m>>a;

    ll r1 = (n+a-1)/a;
    ll r2 = (m+a-1)/a;

    cout<<(r1*r2)<<'\n';
    
}
