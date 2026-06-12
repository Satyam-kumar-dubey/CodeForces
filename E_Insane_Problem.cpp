
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n)
{
    if(n%2 != 0 && n%3 == 0)
    return true;
    else
    return false;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n,l1,r1,l2,r2;
        cin>>n>>l1>>r1>>l2>>r2;

        ll c = 0;
        for(ll i=l1; i<=r1; i++)
        {
            ll it = l2 / i;
            while((i*it) <= r2)
            {
                ll val = i * it;
                if(check(val))
                c++;

                it++;
            }
        }
        cout<<c<<'\n';
    }
    
}
