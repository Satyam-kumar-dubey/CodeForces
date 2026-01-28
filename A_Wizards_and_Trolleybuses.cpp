
#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int buses;
    long double acceleration, distance;
    cin>>buses>>acceleration>>distance;

    vector<pair<long double,long double>>arr(buses);
    for(int i=0; i<(int)buses; i++)
    {
        long double start, maxSpeed;
        cin>>start>>maxSpeed;
        arr[i] = {start,maxSpeed};
    }

    vector<long double>ans(buses);
    for(int i=0; i<(int)buses; i++)
    {
       long double minDistToreachMaxSpeed = ((arr[i].second * arr[i].second) / (2.0L * acceleration));
        
       long double TotalTime;
       if(minDistToreachMaxSpeed >= distance)
       TotalTime = sqrtl(2.0L * distance / acceleration);
       else
       TotalTime = (arr[i].second / acceleration ) + ((distance - minDistToreachMaxSpeed)/arr[i].second);

       ans[i] = arr[i].first + TotalTime;
    }

    for(int i=1; i<(int)buses; i++)
    {
        if(ans[i] < ans[i-1])
        ans[i] = ans[i-1];
    }

    cout<<fixed<< setprecision(10);
    for(long double val: ans)
    cout<<val<<'\n';
}