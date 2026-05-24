
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,b;
    cin>>a>>b;

    ll od = (a+1)/2;
    
    if(b <= od)
    cout<<(b*2 - 1)<<'\n';
    else
    cout<<((b-od)*2)<<'\n';
}
