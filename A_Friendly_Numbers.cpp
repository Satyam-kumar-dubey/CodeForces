
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int s (ll n)
{
    int sm = 0;
    while(n > 0)
    {
        int d = n % 10;
        sm += d;
        n /= 10;
    }
    return sm;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n, c = 0;
        cin>>n;

        for(ll i = n+1; i<(n+90); i++)
        {
            if(i - s(i) == n)
            c++;
        }
        cout<<c<<'\n';
    }
    
}
