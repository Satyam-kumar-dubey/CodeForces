
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
        int n;
        cin>>n;

        ll it = 1;
        while(n--)
        {
            cout<<it<<" ";
            it += 2;
        }
        cout<<"\n";
    }
    
}
