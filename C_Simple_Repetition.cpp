
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPrime(ll x)
{
    if(x < 2)
    return false;

    for(ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll x;
        int k;
        cin >> x >> k;

        if(k == 1)
        cout << (isPrime(x) ? "YES" : "NO") << '\n';
        else
        {
            if(x == 1 && k == 2)
            cout << "YES\n";
            else
            cout << "NO\n";
        }
    }
}