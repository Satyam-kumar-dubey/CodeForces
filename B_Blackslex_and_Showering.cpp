
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long solve(vector<int>&arr)
{
    
    long long sum =0;
    for(int i=0; i<arr.size()-1; i++)
    {
        sum += abs(arr[i+1]-arr[i]);
    }
    long long ans = sum;

    ans = min(ans, sum - abs(arr[0] - arr[1]));
    ans = min(ans, sum - abs(arr[arr.size() - 2] - arr[arr.size() - 1]));

    for (int i = 1; i < arr.size()- 1; i++)
    {
        long long temp = sum - abs(arr[i]-arr[i-1]) - abs(arr[i]-arr[i+1]) + abs(arr[i-1]-arr[i+1]);
        ans = min(temp,ans);
    }
        
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