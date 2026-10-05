
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
        ll a,b,c;
        cin>>a>>b>>c;

        ll op1 = abs(a-b);
        ll op2 = abs((a+c) - b);
        cout<<max(op1,op2)<<'\n';
    }
}