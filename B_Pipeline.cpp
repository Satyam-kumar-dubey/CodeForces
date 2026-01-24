
#include<iostream>
using namespace std;

int main ()
{
    long long noOfhouse, splitter;
    cin>>noOfhouse>>splitter;

    long long totalSum = ((splitter-1)*(splitter)/2) + 1;
    if(noOfhouse > totalSum)
    cout<<-1<<endl;
    else
    {
        long long start = 0, end = splitter-1;
        while(start <= end )
        {
            long long mid = start + (end-start)/2;
            long long sum = (mid * (mid+1))/2;
            if(totalSum - sum > (noOfhouse-1))
            start = mid + 1;
            else
            end = mid - 1;
        }
        cout<<(splitter-1-end)<<endl;
    }
}