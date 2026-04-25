#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;

    int t = min(a,b);
    if(t%2==1)
    cout<<"Akshat"<<"\n";
    else
    cout<<"Malvika"<<"\n";
}