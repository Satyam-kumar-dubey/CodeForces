
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int a;
    cin>>a;
    vector<int>arr(a);
    for(int i =0; i<a; i++)
    {
        cin>>arr[i];
    }

    int count =0;

    for(int i=1; i<arr.size()-1; i++)
    {
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1)
        {
            count++;
            arr[i+1] = 0;
        }
    }
    cout<<count;
}