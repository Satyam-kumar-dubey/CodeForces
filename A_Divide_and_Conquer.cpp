
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;

        cout<<(x>=y && x%y == 0 ? "YES" : "NO")<<'\n';
    }
    
}
