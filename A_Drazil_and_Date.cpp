
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,s;
    cin>>a>>b>>s;

    long long d = abs(a) + abs(b);

    if(s >= d && (s - d) % 2 == 0)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
}