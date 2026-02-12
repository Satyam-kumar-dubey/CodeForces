
#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        int remainder = n % 7;
        cout<<(remainder == 0 ? n : (n-remainder))<<'\n';
    }
}