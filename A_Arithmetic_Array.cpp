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

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum == n)
        {
            cout << 0 << endl;
        } 
        else if (sum < n)
        {
            cout << 1 << endl;
        } 
        else
        {
            cout << sum - n << endl;
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
