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
    vector<string>v(8);
    for(auto &s : v)
    cin>>s;

    for(int i = 1; i < 7; i++)
    {
        for(int j = 1; j < 7; j++)
        {
            if (v[i][j] == '#' && v[i-1][j-1] == '#' && v[i-1][j+1] == '#' && v[i+1][j-1] == '#' && v[i+1][j+1] == '#') {
                cout<<i + 1 << " " << j + 1<<"\n";
                return;
            }
        }
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
