#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int d = abs(v[0] - v[n - 1]);
    int x=n, y=1;   
    for (int i=0; i<n - 1; i++)
    {
        int t = abs(v[i] - v[i + 1]);
        if (t < d)
        {
            d = t;
            x = i+1;  
            y = i+2;
        }
    }
    cout<<x<<" "<<y<<'\n';
}