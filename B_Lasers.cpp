
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        vector<int>v(n),v2(m);
        for(int i=0; i<n; i++)
        cin>>v[i];
        
        for(int i=0; i<m; i++)
        cin>>v2[i];

        cout<<(n+m)<<'\n';
    }
}