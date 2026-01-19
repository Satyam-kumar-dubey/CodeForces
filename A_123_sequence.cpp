
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector<int>count(4,0);
    for(int i=0; i<arr.size(); i++)
    {
        count[arr[i]]++;
    }
    int ans = max({count[1],count[2],count[3]});

    cout<<(n-ans);
}