
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

void solve()
{
    int n;
    cin>>n;

    int y = 1;
    while(n > 0)
    {
        y *= 10;
        n /= 10;
    }
    cout<<y+1<<'\n';
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
