
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
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int mx = max(a,max(b,c));
        int d = (mx - a) + (mx - b) + (mx - c);

        if(d > n)
        cout<<"NO"<<'\n';
        else
        {
            if((n - d) % 3 == 0 )
            cout<<"YES"<<'\n';
            else 
            cout<<"NO"<<'\n';
        }
    }
    
}
