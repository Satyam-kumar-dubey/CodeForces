
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;

    int mx = max(x,y);
    int r = 6 - mx + 1;

    int t = gcd(r,6);

    cout<<(r/t)<<"/"<<(6/t)<<'\n';
}