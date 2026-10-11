
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int v[n];

    for (int i = 0; i < n; i++)
    cin >> v[i];

    sort(v, v + n);

    int s = 0;

    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
        s += (v[i] * -1);
        else
        break;
    }

    cout<<s<<'\n';
}