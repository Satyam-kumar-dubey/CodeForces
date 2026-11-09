
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>p(n + 1);
        vector<ll> idx;

        for (ll i = 1; i <= n; i++)
        {
            cin>>p[i];
            if(p[i] != i)
            idx.push_back(i);
        }
        
        bool f = true;
        ll k = idx.size();

        for (ll j = 0; j < k; j++) {
            if (p[idx[j]] != idx[k - 1 - j])
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<"\n";
    }
}