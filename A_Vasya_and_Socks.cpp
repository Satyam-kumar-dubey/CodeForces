
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    int a = 0;
    while(n--)
    {
        a++;

        if(a % m == 0)
        n++;
        
    }
    cout<<a<<'\n';
    
}
