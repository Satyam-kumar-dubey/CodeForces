
#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int num;
        cin>>num;

        for(int i=1; i<=num; i++)
        cout<<i<<" ";
        cout<<endl;
    }
}