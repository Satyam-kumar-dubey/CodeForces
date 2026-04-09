
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>v(n-1);
    for(int i=0; i<n-1; i++)
    cin>>v[i];

    int a,b;
    cin>>a>>b;

    int s = 0;
    for(int i=a-1; i<b-1; i++)
    s += v[i];

    cout<<s<<'\n';
}