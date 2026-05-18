
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
        int x,y;
        cin>>x>>y;

        int m = (x+y)/2;
        int a = (m-x) + (y-m);
        cout<<a<<'\n';
    }
}
