
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
        int l,a,b;
        cin>>l>>a>>b;

        int rs = 0;
        for(int i=0; i<l; i++)
        {
            a = (a+b) % l;
            rs = max(rs,a);
        }
        cout<<rs<<'\n';
    }
    
}
