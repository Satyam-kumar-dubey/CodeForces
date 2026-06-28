
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ll cnt = n / i;
            ans += cnt * cnt;
        }

        cout<<ans<<'\n';
    }
}