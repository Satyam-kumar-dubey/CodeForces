
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
        ll a,b;
        cin>>a>>b;

        ll ans = (ll)4e18;

        for(int i=0; i<=40; i++)
        {
            ll tmp = b+i;
            ll ops = 0;
            ll val = a;

            if(tmp == 1)
            continue;

            while(val > 0)
            {
                val /= tmp;
                ops++;
            }
            ans = min(ans,(ll)ops+i);
        }
        cout<<ans<<'\n';
    }
}