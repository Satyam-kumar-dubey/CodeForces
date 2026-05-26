
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int t = n / 7;
    int r = n % 7;

    if( r == 6)
    {
        t++;
        r = 1;
    }
    if( r > 2)
    r = 2;

    cout<<(t*2)<<" "<<(t*2+r)<<'\n';
}

