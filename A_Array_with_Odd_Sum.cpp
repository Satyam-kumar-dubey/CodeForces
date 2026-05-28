
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

        int o = 0, e = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            if(x % 2 == 0)
            e++;
            else
            o++;
        }
        if( o > 0 && e > 0)
        cout<<"YES"<<'\n';
        else if(o == n)
        cout<<(n%2 ? "YES" : "NO")<<'\n';
        else 
        cout<<"NO"<<'\n';
    }
    
}
