
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
        ll n;
        cin>>n;

        for(int i=2; i<32; i++)
        {
            ll x = (1LL << i) - 1;
            if(n % x == 0)
            {
                cout<<n/x<<'\n';
                break;
            }
        }
    }
    
}
