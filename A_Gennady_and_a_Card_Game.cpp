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
    string a;
    cin >> a;

    char b = a[0];
    char c = a[1];

    bool d = false;

    for (int i = 0; i < 5; i++)
    {
        string card;
        cin >> card;

        if (card[0] == b || card[1] == c)
        {
            d = true;
        }
    }

    cout << (d ? "YES" : "NO") << endl;

}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}
