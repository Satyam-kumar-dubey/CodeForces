
#include<iostream>
using namespace std;

int main ()
{
    double base;
    int no;
    cin>>base>>no;

    vector<int>arr(no);
    for(int i=0; i<no; i++)
    cin>>arr[i];

    long long ans = 0;
    for(int i =0; i<no; i++)
    {
        ans += arr[i]*pow(base,no-i-1);
    }

    if(ans % 2 != 0)
    cout<<"odd";
    else
    cout<<"even";
}