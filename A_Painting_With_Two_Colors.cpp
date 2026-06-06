
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
        ll n, a, b;
        cin >> n >> a >> b;

        bool f;

        if (a <= b)
        f = ((n - b) % 2 == 0);
        else 
        f = ((n - a) % 2 == 0 && (n - b) % 2 == 0);
        
        cout<<(f ? "YES" : "NO")<<'\n';
    }

}