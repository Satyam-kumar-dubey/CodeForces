
#include<iostream>
using namespace std;

int main ()
{
    long long n;
    cin>>n;
    long long sum = 0;
    for(long long i=1; ; i++)
    {
        sum += i;
        if(sum == n)
        {
            cout<<i;
            break;
        }
        else if(sum > n)
        {
            cout<<(n-(sum-i));
            break;
        }
    }
}