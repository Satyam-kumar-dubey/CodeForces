#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    int x = t/5;
    int y = t%5;

    cout<< (y == 0 ? x : x+1);
}
    