
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
        ll k,x;
        cin>>k>>x;

        while(k--)
        {
            if(x % 2 == 0)
            x *= 2;
            else
            {
                x = (x*3) + 1;
            }
        }
        cout<<x<<'\n';
    }
    
}
