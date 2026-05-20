
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
        ll n;
        cin>>n;
        
        if(n <= 2)
        {
            cout<<0<<'\n';
            continue;
        }
        if(n % 2 == 0)
        cout<<(n/2)-1<<'\n';
        else
        cout<<(n/2)<<'\n';
    }
    
}
