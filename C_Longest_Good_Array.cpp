
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
        ll l ,r;
        cin>>l>>r;

        ll d = r - l;
        ll st = 1, en = 100000, ans = -1;
        while(st <= en)
        {
            ll m = st + (en - st)/2;
            ll val = m*(m-1)/2;

            if(val <= d)
            {
                ans = m;
                st = m + 1;
            }
            else
            en = m - 1;
        }
        cout<<ans<<'\n';
    }
    
}
