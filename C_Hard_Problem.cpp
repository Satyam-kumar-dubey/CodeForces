
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
        ll m,a,b,c;
        cin>>m>>a>>b>>c;

        ll rs = 0;
        rs += min(m,a);
        rs += min(m,b);

        ll l = 2*m - rs;
        rs += min(l,c);

        cout<<rs<<'\n';
    }
    
}
