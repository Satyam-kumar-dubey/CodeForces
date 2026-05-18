#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        ll o1 = n * a;

        ll o2 = (n / 3) * b + (n % 3) * a;

        ll o3 = ((n + 2) / 3) * b;

        cout << min({o1, o2, o3}) << '\n';
    }
}