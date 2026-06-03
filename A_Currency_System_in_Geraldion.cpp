
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int a = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        a = min(a,x);
    }
    cout<<(a == 1 ? -1 : 1)<<'\n';
}
