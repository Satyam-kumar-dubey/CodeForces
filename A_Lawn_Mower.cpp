
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
        int x,y;
        cin>>x>>y;

        if(y == 1)
        {
            cout<<0<<'\n';
            continue;
        }
        else
        cout<<(x - (x/y))<<'\n';
    }
    
}
