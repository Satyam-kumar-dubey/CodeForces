
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,a,b;
    cin>>n>>a>>b;

    cout<<min(n-a, b+1)<<'\n';
    
}
