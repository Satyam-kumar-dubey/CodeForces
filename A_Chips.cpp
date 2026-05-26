
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    for(int i=0; ; i++)
    {
        int vl = (i%n) + 1;
        if(m >= vl)
        m -= vl;
        else 
        break;
    }
    cout<<m<<'\n';
}
