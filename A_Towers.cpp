
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>solve (vector<int>&arr)
{
    
    unordered_map<int,int>m;
    for(int i=0; i<arr.size(); i++)
    {
        m[arr[i]]++;
    }
    
    int height = INT_MIN;
    for(auto i: m)
    {
        height = max(height,i.second);
    }

    int noOfTower = m.size();
    return {height,noOfTower};

}

int main ()
{
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];

    vector<int>res = solve(arr);
    cout<<res[0]<<" "<<res[1];
}