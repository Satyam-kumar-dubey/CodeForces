
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string ps;
    cin>>ps;
    int t;
    cin>>t;

    bool f = false, s = false;
    for(int i=0; i<t; i++)
    {
        string v;
        cin>>v;

        if(v == ps)
        {
            cout<<"YES"<<'\n';
            return 0;
        }

        if(v[1] == ps[0])
        f = true;

        if(v[0] == ps[1])
        s = true;
    }
    cout<<(f && s ? "YES" : "NO")<<'\n';
}
