
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int>&a)
{
    int d = (a[1]*a[2]) / a[6];
    int l = a[3]*a[4];
    int s = a[5] / a[7];

    int res = min(d,l);
    res = min(res,s);

    return (res/a[0]);
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>arr(8);
    for (int i = 0; i < 8; i++)
    cin>>arr[i];

    cout<<solve(arr);
}