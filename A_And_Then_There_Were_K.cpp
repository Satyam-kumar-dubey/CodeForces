
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;

        ll val = 1;
        while ((val << 1) <= n)
        {
            val <<= 1;
        }

        cout<<val - 1<<'\n';
    }
}