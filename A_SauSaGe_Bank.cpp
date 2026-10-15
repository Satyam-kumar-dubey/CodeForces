
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int am = 1;
        for(int i=0; i<n-k+1; i++)
        am *= 2;

        am += 2*(k-1);
        cout<<am<<'\n';
    }
}