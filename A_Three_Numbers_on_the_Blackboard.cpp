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
        ll a, b, c;
        cin >> a >> b >> c;

        ll arr[] = {a, b, c};
        sort(arr, arr + 3);

        ll x = arr[0];
        ll y = arr[1];
        ll z = arr[2];

        ll answer = min(z - x, y);

        cout << answer << '\n';
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
