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

        int ans = n;

        for (int i = 1; i < n - 1; i++)
        {
            string temp = s;
            temp.erase(i, 1);

            int cnt = 1;
            for (int j = 1; j < n - 1; j++)
            {
                if (temp[j] != temp[j - 1])
                cnt++;
            }

            ans = min(ans, cnt);
        }
        cout<<ans<<'\n';
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
