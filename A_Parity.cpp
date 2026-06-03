
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    double b;
    int n;
    cin>>b>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    ll a = 0;
    for(int i =0; i<n; i++)
    {
        a += v[i]*pow(b,n-i-1);
    }

    if(a % 2 != 0)
    cout<<"odd";
    else
    cout<<"even";
}