
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin>>testCases;

    while (testCases--)
    {
        int n;
        cin>>n;
        vector<int>a(n);

        int zeros=0, neg=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            zeros++;
            if(a[i] == -1)
            neg++;
        }

        int ans=zeros;
        if(neg % 2 == 1)
        ans += 2;

        cout<<ans<<'\n';
    }
}