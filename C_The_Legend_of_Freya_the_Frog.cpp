
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        int xd = (x)/k;
        if(x % k != 0)
        xd++;

        int yd = (y)/k;
        if(y % k != 0)
        yd++;

        cout<<(xd > yd ? 2*xd-1 : 2*yd)<<'\n';
    }
    
}
