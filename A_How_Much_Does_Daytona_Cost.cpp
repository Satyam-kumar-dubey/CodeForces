#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];

        unordered_set<int>s(arr.begin(),arr.end());
        if(s.count(k))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}