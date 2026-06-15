
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

        vector<int>v = {a,b,c};
        int ct = 0;
        while(ct < 5)
        {
            sort(v.begin(),v.end());
            v[0]++;
            ct++;
        }
        cout<<v[0]*v[1]*v[2]<<'\n';
    }
    
}
