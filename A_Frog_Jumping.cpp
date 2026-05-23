
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
        ll a,b,k;
        cin>>a>>b>>k;

        ll l = k/2;
        ll r = k - l;

        cout<<((a*r) - (b*l))<<'\n';
    }
    
}
