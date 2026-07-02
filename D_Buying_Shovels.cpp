#include<bits/stdc++.h>
using namespace std;

#define ll long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

void solve()
{
    int n,k;
    cin>>n>>k;

    if(k == 1)
    cout<<n<<'\n';
    else if(n <= k)
    cout<<1<<'\n';
    else
    {   
        int mx = 1;
        for(int i=1; i*i <= n; i++)
        {
            if(n%i == 0)
            {
                if(i <= k)
                mx = max(i,mx);
                if(n/i <= k)
                mx = max(mx,n/i);
            }
        }
        cout<<n/mx<<'\n';
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
