#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0; i<n; i++)
        cin>>a[i];

        int sm=INT_MAX;
        for(int i=1; i<n; i++)
        sm=min(sm,a[i]);

        cout<<(sm>a[0] ? "YES" : "NO")<<'\n';

    }
}