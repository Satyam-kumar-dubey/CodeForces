
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
        int a,b,c;
        cin>>a>>b>>c;

        vector<int>v(3);
        v[0] = a;
        v[1] = b;
        v[2] = c;

        sort(v.begin(),v.end());
        cout<<v[1]<<'\n';
    }
    
}
