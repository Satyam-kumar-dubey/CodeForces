
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int first, second;
    cin>>first>>second;

    vector<int>arr = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int index = lower_bound(arr.begin(), arr.end(), first) - arr.begin();

    if(index+1 < arr.size() && arr[index+1] == second)
    cout<<"YES";
    else
    cout<<"NO";
}