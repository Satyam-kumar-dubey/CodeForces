
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
        ll n,k,x;
        cin>>n>>k>>x;

        ll s1 = k*(k+1)/2;
        ll s2 = k*(2*n - k+1)/2;

        cout<<(x >= s1 &&  x <= s2 ? "YES" : "NO")<<"\n";
    }
    
}
