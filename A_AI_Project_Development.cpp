
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
        int n,x,y,z;
        cin>>n>>x>>y>>z;

        int t1 = n / (x+y);
        if(n % (x+y) != 0)
        t1 = t1+1;

        int t2 = 0;
        t2 += z;
        n -= (x*z);
        y *= 10;
        int l = n / (x+y);
        if(n % (x+y) != 0)
        l = l+1;
        t2 += l;

        cout<<min(t1,t2)<<'\n';
    }
    
}
