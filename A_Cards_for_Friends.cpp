#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
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
    ll w,h,n;
    cin>>w>>h>>n;

    if(w % 2 != 0 && h % 2 != 0 && n == 1)
    {
        cout<<"YES"<<'\n';
        return;
    }
    else if(w % 2 != 0 && h % 2 != 0 && n >1)
    {
        cout<<"NO"<<'\n';
        return;
    }

    ll cnt = 1;
    while(w % 2 == 0)
    {
        w /= 2;
        cnt *= 2;

        if(cnt >= n)
        {
            cout<<"YES"<<'\n';
            return;
        }
    }
    while(h % 2 == 0)
    {
        h /= 2;
        cnt *= 2;

        if(cnt >= n)
        {
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
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
