
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        ll n, k;
        cin>>n>>k;

        ll ans = 0, val = 1;

        while(val <= n && k > 0)
        {
            ll temp = n / val;

            if(temp > k)
            temp = k;

            ans += temp;
            n -= temp * val;
            k = temp;

            val *= 2;
        }

        cout<<ans<<"\n";
    }
}