
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
        ll a,b,c;
        cin>>a>>b>>c;
        bool f = false;

        ll x = 2*b-c;
        if(x > 0 && x % a == 0)
        f = true;

        ll y = a+c;
        if(y % (2*b) == 0)
        f = true;

        ll z = 2*b-a;
        if(z > 0 && z % c == 0)
        f = true;

        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
