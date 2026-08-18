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
        string s;
        cin >> s;

        int a = 0, b = 0, c = 0;

        for (char ch : s)
        {
            if (ch == 'A')
            a++;
            else if (ch == 'B')
            b++;
            else
            c++;
        }

        if (b == a + c)
        cout << "YES\n";
        else
        cout << "NO\n";
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
