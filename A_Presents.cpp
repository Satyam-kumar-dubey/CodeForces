#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    vector<int>v(t);
    vector<int>a(t);

    for(int i=0; i<t; i++)
    cin>>v[i];

    for(int i=0; i<t; i++)
    a[v[i]-1] = i+1;

    for(int x:a)
    cout<<x<<" ";
}