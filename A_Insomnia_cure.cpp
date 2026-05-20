
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k,l,m,n;
    ll d;
    cin>>k>>l>>m>>n>>d;

    ll c = 0;
    for(ll i=1; i<=d; i++)
    {
        if(i%k ==0 || i%l==0 || i%m == 0|| i%n == 0)
        continue;
        c++;
    }
    cout<<d-c<<'\n';
}
