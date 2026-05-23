
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int s = 0, c = 0;
    for(int val : v)
    s += val;

    for(int i=1; i<=5; i++)
    {
        if((s + i) % (n+1) != 1)
        c++;
    }
    cout<<c<<'\n';
}