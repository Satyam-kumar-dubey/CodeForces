
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll cnt (ll n)
{
    int c = 0;
    while(n % 3 == 0)
    {
        c++;
        n /= 3;
    }
    return c;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    vector<ll>v(n);
    for(auto &x : v)
    cin>>x;

    sort(v.begin(),v.end(),[](ll a, ll b)
    {
        int thcnt = cnt(a);
        int twcnt = cnt(b);

        if(thcnt != twcnt)
        return thcnt > twcnt;
        return a < b;
    });

    for(auto &x : v)
    cout<<x<<" ";

    cout<<'\n';
}
