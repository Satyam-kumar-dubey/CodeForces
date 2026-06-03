
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
        int n,k;
        cin>>n>>k;

        int tp = n - (k*k);
        if(n >= k*k && tp % 2 == 0)
        cout<<"YES"<<'\n';
        else 
        cout<<"NO"<<'\n';
    }
    
}
