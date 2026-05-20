
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

        if(n%2020 <= n/2020)
        cout<<"YES"<<'\n';
        else 
        cout<<"NO"<<'\n';
    }
    
}
