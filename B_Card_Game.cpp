
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;

        if ((a1 > b1 ? 1 : 0) + (a2 > b2 ? 1 : 0) > (a1 < b1 ? 1 : 0) + (a2 < b2 ? 1 : 0))
        ans++;

        if ((a1 > b2 ? 1 : 0) + (a2 > b1 ? 1 : 0) > (a1 < b2 ? 1 : 0) + (a2 < b1 ? 1 : 0))
        ans++;

        if ((a2 > b1 ? 1 : 0) + (a1 > b2 ? 1 : 0) > (a2 < b1 ? 1 : 0) + (a1 < b2 ? 1 : 0))
        ans++;

        if ((a2 > b2 ? 1 : 0) + (a1 > b1 ? 1 : 0) > (a2 < b2 ? 1 : 0) + (a1 < b1 ? 1 : 0))
        ans++;

        cout<<ans<<'\n';
    }

}