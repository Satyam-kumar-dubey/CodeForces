
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
        int a,b;
        cin>>a>>b;

        int s = min(a,b);
        int bg = max(a,b);

        int l = max(2*s, bg);
        cout<<(l*l)<<'\n';
    }
    
}
