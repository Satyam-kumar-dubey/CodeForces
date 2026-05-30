
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        mn = min(mn, abs(x));
    }
    cout<<mn<<'\n';
}
