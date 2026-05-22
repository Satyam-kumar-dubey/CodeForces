
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;

    int c = a1+a2+a3;
    int m = b1+b2+b3;

    int cs = (c+4)/5;
    int ms = (m+9)/10;

    cout<<(cs+ms <= n ? "YES" : "NO")<<'\n';
}
