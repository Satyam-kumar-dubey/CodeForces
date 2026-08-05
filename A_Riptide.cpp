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
    int a,b,c;
    cin>>a>>b>>c;

    int cnt = 0;
    while(true)
    {
        if(a == b || b == c || a == c)
        {
            cout<<cnt<<'\n';
            break;
        }
        int mx = max({a,b,c});
        int mn = min({a,b,c});

        if(a == mx)
        a--;
        else if(b == mx)
        b--;
        else
        c--;

        if(mn == a)
        a++;
        else if(mn == b)
        b++;
        else
        c++;

        cnt++;
        
    }
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
