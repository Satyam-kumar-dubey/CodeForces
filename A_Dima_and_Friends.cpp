
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int sum = 0, count = 0;
    for(int val : v)
    sum += val;

    for(int i=1; i<=5; i++)
    {
        if((sum + i) % (n+1) != 1)
        count++;
    }
    cout<<count<<'\n';
}