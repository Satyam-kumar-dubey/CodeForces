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
    string s, t;
    cin >> s >> t;

    int pos = 0;

    for (int i = 0; i < t.length(); i++)
    {
        if (s[pos] == t[i])
        {
            pos++;
        }
    }

    cout << pos + 1 << endl;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}
