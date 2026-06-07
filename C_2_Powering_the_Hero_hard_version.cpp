
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
        int n;
        cin>>n;

        vector<ll>v(n);
        for (auto &x : v)
        cin>>x;

        ll a = 0;

        priority_queue<ll>pq;
        for(ll i=0; i<n; i++)
        {
            if(v[i] != 0)
            pq.push(v[i]);
            else if(v[i] == 0 && !pq.empty())
            {
                a += pq.top();
                pq.pop();
            }
        }
        cout<<a<<'\n';
    }
    
}
