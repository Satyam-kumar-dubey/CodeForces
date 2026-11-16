
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        cout<<( b == a+1 && c == b+1 ? "YES" : "NO")<<'\n';
    }
}