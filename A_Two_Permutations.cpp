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
        int n, a, b;
        cin >> n >> a >> b;

        if (a == n && b == n) {
            cout << "Yes\n";
        } 
        else if (a + b <= n - 2) {
            cout << "Yes\n";
        } 
        else {
            cout << "No\n";
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
