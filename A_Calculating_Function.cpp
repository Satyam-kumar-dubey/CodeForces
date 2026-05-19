

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    cout<<(n%2 == 0 ? (n/2) : -(n+1)/2)<<'\n';
}
