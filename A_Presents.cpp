
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin>>size;
    vector<int>arr(size);
    
    for(int i=0; i<size; i++)
    cin>>arr[i];

    vector<int>ans(size);
    for(int i=0; i<size; i++)
    ans[arr[i]-1] = i+1;

    for(int val : ans)
    cout<<val<<" ";
}