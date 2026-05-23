
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int m = 0, c = 0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;

        if(a == b)
        continue;
        else if( a > b)
        m++;
        else
        c++;
    }
    if(m == c)
    cout<<"Friendship is magic!^^"<<'\n';
    else if(m > c)
    cout<<"Mishka"<<'\n';
    else
    cout<<"Chris"<<'\n';
}
