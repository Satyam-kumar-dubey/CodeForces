
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    vector<int>a(n);
    
    int cnt = 0;
    int s = 0;
    
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i] > 0)
        cnt++;

        s ^= a[i];
    }
    
    if(cnt <= 1)
    {
        cout<<0<<"\n";
        return;
    }
    
    ll ans = 0;
    if(s == 0)
    ans++;
    
    for(int i = 0; i < n; ++i)
    {
        if((s ^ a[i]) < a[i])
        ans++;
    }
    
    cout<<ans % 998244353<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}