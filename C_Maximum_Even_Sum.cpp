
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        ll a,b,ans;
        cin>>a>>b;

        if((a%2) == 1 && (b%2) == 1)
        ans = (a*b)+1;
        else if((a%2) == 0 && (b%2) == 0)
        {
            a = a*(b/2);
            b = 2;
            ans = (a+b);
        }
        else if((a%2) == 1 && (b%2) == 0)
        {
            a = a*(b/2);
            b = 2;
            ans = (a+b);

            if((ans%2) == 1)
            ans = -1;
        }
        else 
        ans = -1;

        cout<<ans<<'\n';
    }
}