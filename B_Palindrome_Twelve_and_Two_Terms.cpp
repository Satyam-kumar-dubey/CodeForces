
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    ll v[12] ={0, 1, 2, 3, 4, 5,6, 7, 8, 9, 22, 11};

    while(t--)
    {
        ll n;
        cin>>n;

        if (n == 10)
        {
            cout<<-1<<'\n';
            continue;
        }

        ll a = v[n % 12];
        ll b = n - a;

        cout<<a<<' '<<b<<'\n';
    }

}