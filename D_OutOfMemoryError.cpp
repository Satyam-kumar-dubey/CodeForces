
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
        int n,m;
        long long h;
        cin>>n>>m>>h;

        vector<int>v(n),og(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        og = v;

        vector<pair<int,long long>>op(m);
        for(int i=0; i<m; i++)
        cin>>op[i].first>>op[i].second;

        for(int i=0; i<m; i++)
        {
            int pos = op[i].first;
            long long val = op[i].second;

            v[pos-1] += val;
            if(v[pos-1] > h)
            v = og;
        }
        for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
        cout<<"\n";
    }
}




















