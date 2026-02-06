
#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long n,k;
        cin>>n>>k;

        long long quotient = (k-1)/(n-1);

        cout<<k+quotient<<'\n';
    }
}