
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

    vector<string>v(t);
    for(int i=0; i<t; i++)
    cin>>v[i];

    if(v.size() == 1)
    {
        v[0] += v[0];
        if(v[0].find(ps) != string::npos)
        {
            cout<<"YES"<<"\n";
            return 0;
        }
    }

    bool f = false, s = false;
    for(int i=0; i<t; i++)
    {
        if(v[i][1] == ps[0])
        f = true;

        if(v[i][0] == ps[1])
        s = true;
    }
    cout<<(f && s ? "YES" : "NO")<<'\n';
}
