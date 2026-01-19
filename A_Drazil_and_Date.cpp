
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int a,b,s;
    cin>>a>>b>>s;

    int steps = abs(a) + abs(b);
    if(steps == s)
    cout<<"Yes";
    else if(steps > s)
    cout<<"No";
    else if(steps < s)
    {
        int remaining = s - steps;
        if(remaining % 2 != 0)
        cout<<"No";
        else
        cout<<"Yes";
    }
}