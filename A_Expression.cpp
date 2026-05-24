
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    cin>>a>>b>>c;

    int an = max({
        a+b+c,
        a+b*c,
        a*b+c,
        a*b*c,
        (a+b)*c,
        a*(b+c)
    });


    cout<<an<<'\n';
    
}
