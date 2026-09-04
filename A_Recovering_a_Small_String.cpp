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

        string sb;

        while (sb.length() < 3)
        {
            int remaining = 2 - sb.length();

            if (n - 1 <= remaining * 26)
            {
                sb += 'a';
                n--;
            }
            else
            {
                int x = n - remaining * 26;
                sb += char('a' + x - 1);
                n -= x;
            }
        }

        cout << sb << '\n';
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
