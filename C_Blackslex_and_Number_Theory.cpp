
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long solve(vector<int>&arr)
{
    sort(arr.begin(),arr.end());

    long long first = arr[0];
    long long second = arr[1];
    long long diff = second - first;

    long long ans = max(first,diff);
    return ans;
}

int main ()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vector<int>v;
        for(int j=0; j<a; j++)
        {
            int b;
            cin>>b;
            v.push_back(b);
        }
        cout<<solve(v)<<endl;
    }
}