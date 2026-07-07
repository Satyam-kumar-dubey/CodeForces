#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;

    double ans=0;

    for(int i=1;i<n;i++)
    {
        double dx=a[i].first-a[i-1].first;
        double dy=a[i].second-a[i-1].second;

        ans+=sqrt(dx*dx+dy*dy);
    }

    ans=(ans*k)/50.0;

    cout<<fixed<<setprecision(9)<<ans;

}