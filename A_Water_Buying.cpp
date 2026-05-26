
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
        ll n,a,b;
        cin>>n>>a>>b;

        ll p = n/2;

        if(n % 2 == 0)
        cout<<min(n*a, p*b)<<'\n';
        else
        cout<<min(a*n, (p*b)+a)<<'\n';
    }
    
}
