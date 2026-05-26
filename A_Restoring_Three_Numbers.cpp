
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int mx = 0;

    vector<int>v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
        mx = max(mx, v[i]);
    }
    for(int x : v)
    {
        if(x != mx)
        cout<<mx - x<<" ";
    }
    cout<<'\n';
}
