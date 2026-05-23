
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
        int n,s,k,sm = 0;
        cin>>n>>s>>k;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            sm += x;
        }
        if(sm > s)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        else if(s % k == sm % k )
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    
}
