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
    cin>>n;

    queue<int>q;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(q.size() > 1)
    {
        int f = q.front();
        q.pop();
        int s = q.front();
        q.pop();

        int val = (f+s)-1;
        q.push(val);
    }
    cout<<q.front()<<'\n';
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
