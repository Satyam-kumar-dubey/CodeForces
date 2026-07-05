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
    int n;
    string s;
    cin>>n>>s;

    int cnt = 0;
    string s2 = "abacaba";

    for(int i=0; i+s2.size() <= s.size(); i++)
    {
        if(s.substr(i, s2.size()) == s2)
        cnt++;
    }
    if(s.size() < 7 || cnt > 1)
    {
        cout<<"NO\n";
        return;
    }
    
    int qm = 0;
    for(char c : s)
    {
        if(c == '?')
        qm++;
    }
    if(qm == 7)
    {
        cout<<"YES\n";
        cout<<s2<<'\n';
        return;
    }

    cout<<"YES\n";
    for(char &c: s)
    {
        if(c == '?')
        c = 'd';
    }
    cout<<s<<'\n';
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
