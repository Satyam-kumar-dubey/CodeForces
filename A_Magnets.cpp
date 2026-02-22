
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin>>size;

    vector<string>arr(size);
    for(int i=0; i<size; i++)
    cin>>arr[i];

    int count = 1;
    for(int i=1; i<size; i++)
    {
        if(arr[i][0] == arr[i-1][1])
        count++;
    }

    cout<<count<<'\n';
}