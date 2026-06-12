
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
        ll a,b,x;
        cin>>a>>b>>x;

        vector<pair<ll,ll>>f;
        vector<pair<ll,ll>>s;

        f.push_back({a,0});
        int c = 0;
        while(a > 0)
        {
            a /= x;
            c++;
            f.push_back({a,c});
        }
        s.push_back({b,0});

        c = 0;
        while(b > 0)
        {
            b /= x;
            c++;
            s.push_back({b,c});
        }

        ll ans = 1e18;

        for(auto [va, ca] : f)
        {
            for(auto [vb, cb] : s)
            ans = min(ans, ca + cb + abs(va - vb));
        }

        cout << ans << '\n';
    }
    
}
