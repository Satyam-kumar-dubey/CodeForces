#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;

        int res = a % b;
        cout<<(res == 0 ? res : b-res)<<endl;
    }
}