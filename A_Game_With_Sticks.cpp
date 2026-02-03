
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;

    int mini = min(n,m);
    if(mini % 2 == 1)
    cout<<"Akshat"<<'\n';
    else
    cout<<"Malvika"<<'\n';
}