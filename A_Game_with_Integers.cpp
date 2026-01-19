#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        if(val % 3 == 0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
    }
}