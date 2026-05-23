
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x,y,z;
    cin>>x>>y>>z;

    int a = sqrt((x*z)/y);
    int b = sqrt((x*y)/z);
    int c = sqrt((y*z)/x);

    cout<<(4*(a+b+c))<<'\n';
}