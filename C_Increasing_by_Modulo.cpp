
#include<iostream>
using namespace std;

bool check (vector<int>&arr)
{
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i] > arr[i+1])
        return false;
    }
    return true;
}
int main()
{
    int size, range;
    cin>>size>>range;
    vector<int>arr(size);

    for(int i=0; i<size; i++)
    cin>>arr[i];
    int operations = 0;

    while(!check(arr))
    {
        vector<int>temp;
        for(int i=0; i<size-1; i++)
        {
            if(arr[i] > arr[i+1])
            temp.push_back(i);
        }
        for(int i=0; i<temp.size(); i++)
        arr[temp[i]] = (arr[temp[i]] + 1) % range;

        operations++;
    }
    cout<<operations;

}