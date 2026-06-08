
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(int &x : v)
    cin >> x;

    sort(v.begin(), v.end());

    if (k == 0)
    {
        if (v[0] == 1)
        cout << -1 << '\n';
        else
        cout << v[0] - 1 << '\n';
    }
    else
    {
        int x = v[k - 1];

        if (k < n && v[k] == x)
        cout << -1 << '\n';
        else
        cout << x << '\n';
    }
}