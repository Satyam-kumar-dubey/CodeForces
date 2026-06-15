
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int e,ew,eh;
    cin>>e>>ew>>eh;

    vector<pair<int,int>>v(e);
    for(auto &x : v)
    {
        cin>>x.first>>x.second;
    }
    vector<pair<pair<int,int>,int>>a;
    for(int i=0; i<e; i++)
    {
        a.push_back({v[i],i+1});
    }
    sort(a.begin(),a.end());

    if(a[0].first.first < ew || a[0].first.second < eh)
    {
        cout<<0<<'\n';
        return 0;
    }

    int c = 1;
    for(int i=1; i<e; i++)
    {
        if(a[i].first.first > a[i-1].first.first && a[i].first.second > a[i-1].first.second)
        c++;
    }
    cout<<c<<'\n';
    
}
