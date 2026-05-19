
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        while(n % 2 == 0)
        n /= 2;

        cout<<(n == 1 ? "NO" : "YES")<<'\n';
    }

}