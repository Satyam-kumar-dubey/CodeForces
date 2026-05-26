
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int q = n / 7;
    int rm = n % 7;

    int t = q * 2;

    vector<int> v = {0, 0, 0, 0, 0, 1, 1};

    int mn = 1e9, mx = 0;

    for (int j = 0; j < 7; j++)
    {
        int cnt = 0;

        for (int i = 0; i < rm; i++)
        cnt += v[(j + i) % 7];

        mn = min(mn, cnt);
        mx = max(mx, cnt);
    }

    cout << t + mn << " " << t + mx << "\n";

}