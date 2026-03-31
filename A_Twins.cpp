
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int>a(n);
    int total=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        total += a[i];
    }
    sort(a.rbegin(), a.rend());

    int taken=0, cnt=0;
    for(int coin : a)
    {
        taken += coin;
        cnt++;
        if(taken > total - taken)
        break;
    }
    cout<<cnt;
}