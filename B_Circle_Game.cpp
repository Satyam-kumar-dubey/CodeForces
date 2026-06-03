#include <bits/stdc++.h>
using namespace std;

string game(vector<int> &v, int n)
{
    if (n % 2 != 0)
    return "Mike";

    int mn = -1;
    int idx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < idx)
        {
            idx = v[i];
            mn = i;
        }
    }

    if (mn % 2 == 0)
    return "Joe";

    return "Mike";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        cin>>v[i];

        cout<<game(v, n)<<"\n";
    }
}