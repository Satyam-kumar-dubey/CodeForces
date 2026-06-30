
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;

        int diff = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            diff++;
        }

        int ans;

        if (diff == 1)
        ans = 2;
        else
        ans = 1;

        cout << ans << '\n';
    }
}