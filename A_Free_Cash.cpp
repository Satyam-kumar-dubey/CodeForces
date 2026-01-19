
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int solve(vector<pair<int,int>>&v)
{

    unordered_map<int,int>m;
    for(int i=0; i<v.size(); i++)
    {
       int time = v[i].first*60 + v[i].second;
       m[time]++;
    }
    int count = INT_MIN;
    for(auto &i: m)
    {
        count = max(count,i.second);
    }
    return count;
    
}

int main ()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    cout<<solve(v);
}