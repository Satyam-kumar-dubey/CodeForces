
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m; 
        cin>>n>>m;

        vector<ll>v(n);
        for(auto &x: v)
        cin>>x;

        if(m == 1)
        {
            sort(v.begin(),v.end());
            cout<<v.back()<<'\n';
            continue;
        }

        priority_queue<ll>pq;
        ll sum = 0;
        for(ll i=0; i<m-1; i++)
        {
            pq.push(v[i]);
            sum += v[i];
        }

        ll ans = LLONG_MIN;
        for(ll i = m-1; i<n; i++)
        {
            ll sc = m * (v[i]);
            ans = max(ans , (sc - sum));

            if(v[i] < pq.top())
            {
                sum -= pq.top();
                pq.pop();
                pq.push(v[i]);
                sum += v[i];
            }
        }
        cout<<ans<<'\n';
    }
}