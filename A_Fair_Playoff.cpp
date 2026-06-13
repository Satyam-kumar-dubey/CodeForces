
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int fm = max(a,b);
        int sm = max(c,d);

        vector<int>v = {a,b,c,d};
        sort(v.begin(),v.end());

        if(min(fm,sm) == v[2] && max(fm,sm) == v[3])
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    
}
