

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
        ll s,k,m;
        cin>>s>>k>>m;

        ll rst = m/k;
        ll rm = m%k;

        ll a;
        if(rst % 2 == 1 && k < s)
        a = k;
        else
        a = s;

        cout<<max(0LL,a-rm)<<'\n';
    }
}
