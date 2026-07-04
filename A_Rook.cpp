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
    
    string s;
    cin>>s;

    char col = s[0];
    char row = s[1];

    for(char c = 'a'; c <= 'h'; c++)
    {
        if(c != col)
        cout<<c<<row<<'\n';
    }

    for(char i='1'; i<='8'; i++)
    {
        if(i != row)
        cout<<col<<i<<'\n';
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--) solve();
    
}
