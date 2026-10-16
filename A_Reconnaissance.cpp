#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;

    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v, v + n);

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] - v[i] <= d)
            cnt++;
        }
    }

    cout<<cnt*2<<'\n';
}