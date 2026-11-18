
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;

    while(t--)
    {
        ll n; cin>>n;

        if(n < 4)
        {
            cout<<"-1\n";
            continue;
        }

        if(n % 2 == 0)
        {
            for(ll i=n; i>0; i--)
            cout<<i<<" ";

            cout<<'\n';
        }
        else
        {
            cout<<n-1<<" "<<n<<" ";
            for(ll i=n-2; i>2; i--)
            cout<<i<<" ";

            cout<<1<<" "<<2;
            cout<<'\n';
        }
    }
}