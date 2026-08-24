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
    long long x;

    cin >> n >> x;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            count++;
        }
    }

    cout << count << endl;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}
