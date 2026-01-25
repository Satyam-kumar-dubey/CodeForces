
#include<iostream>
using namespace std;

long long check(long long ways)
{
    long long total = 0;
    long long temp = 2;
    while(temp*temp*temp <= ways)
    {
        long long cube = temp*temp*temp;
        total += ways/cube;
        temp++;
    }
    return total;
}
int main()
{
    long long ways;
    cin>>ways;

    long long start = 8, end = 8 * ways;

    while(start < end)
    {
        long long mid = start + (end-start)/2;
        if(check(mid) >= ways)
        end = mid;
        else
        start = mid + 1;
    }
    if(check(start) == ways)
    cout<<start<<endl;
    else
    cout<<-1<<endl;
}