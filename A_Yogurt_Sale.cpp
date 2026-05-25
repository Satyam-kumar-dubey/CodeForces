
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
        int n,a,b;
        cin>>n>>a>>b;

        int p = n/2;
        int rm = n%2;

        int tc = (rm == 0 ? p*b : (p*b)+a);

        cout<<min(n*a , tc)<<'\n';
    }
    
}
