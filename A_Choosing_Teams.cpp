
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int noOfStudent, minimumTimes;
    cin>>noOfStudent>>minimumTimes;

    vector<int>arr(noOfStudent);
    for(int i=0; i<noOfStudent; i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());
    int count = 0;
    
    for(int val : arr)
    {
        if(val + minimumTimes <= 5)
        count++;
    }
    cout<<(count/3)<<'\n';
}