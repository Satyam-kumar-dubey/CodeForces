
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin>>n>>l;

    vector<int>v(n);

    for(int i = 0; i < n; i++)
    cin>>v[i];

    sort(v.begin(), v.end());

    double a = 0;

    for(int i = 1; i < n; i++)
    a = max(a, (v[i] - v[i - 1]) / 2.0);

    a = max(a, (double)v[0]);
    a = max(a, (double)(l - v[n - 1]));

    cout<<fixed<<setprecision(10)<<a<<'\n';

}