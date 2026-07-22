#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<ll>&v)
{
    for(auto &x: v)
    cin>>x;
}
bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    in(v);

    ll sm = 0;
    for(auto x: v)
    sm += x;

    ll cnt = 0;
    for(auto x : v)
    {
        if(x > 0)
        cnt++;
    }

    if(cnt == n)
    {
        cout<<"YES\n";
        return;
    };

    ll adel = v[0], temp = v[0];
    for(int i=1; i<n-1; i++)
    {
        temp = max(v[i], temp+v[i]);
        adel = max(adel,temp);
    }

    temp = v[1];
    ll adel2 = v[1];
    for(int i=2; i<n; i++)
    {
        temp = max(v[i], temp+v[i]);
        adel2 = max(adel2,temp);
    }

    ll fnl = max(adel,adel2);
    cout<<(sm > fnl ? "YES" : "NO")<<'\n';
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
}
