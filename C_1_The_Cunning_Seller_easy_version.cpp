
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll c (ll x)
{
    ll v = (pow(3,x+1) + x * pow(3,x-1));
    return v;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll ans = 0;
        while( n > 0 )
        {
            ll x = log(n) / log(3);

            if(pow(3, x+1) == n)
            x = x+1;

            ans = ans + c(x);
            x = pow(3,x);

            n = n - x;
        }
        cout<<ans<<'\n';
    }
    
}
