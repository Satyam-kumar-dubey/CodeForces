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
    cin >> n;

    vector<int> freq(1001, 0);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total += x;
        freq[x]++;
    }

    int mf = 0, mv = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (freq[i] > mf)
        {
            mf = freq[i];
            mv = i;
        }
    }

    int other = n - mf;

    if (mf <= other + 1)
    {
        cout << total << "\n";
    }
    else
    {
        int r = mf - (other + 2);
        int ans = total - r * mv;
        cout << ans << "\n";
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
