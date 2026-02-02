
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main ()
{
    int students,gifts;
    cin>>students>>gifts;

    vector<int>arr(gifts);
    for(int i=0; i<gifts; i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());
   
    int ans = INT_MAX;
    for(int i=0; i+students-1 <gifts; i++)
    {
        ans = min(ans, arr[i+students-1] - arr[i]);
    } 
    cout<<ans<<'\n';
}