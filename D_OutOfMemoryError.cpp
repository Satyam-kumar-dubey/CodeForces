
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

        vector<long long>v(n),og(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            og[i] = v[i];
        }

        vector<pair<int,long long>>op(m);
        for(int i=0; i<m; i++)
        cin>>op[i].first>>op[i].second;

        int l = -1;
        for(int i=0; i<m; i++)
        {
            int pos = op[i].first-1;
            int val = op[i].second;
            og[pos] += val;

            if(og[pos] > h)
            l = i;
        }

        for(int i=l+1; i<m; i++)
        {
            int pos = op[i].first-1;
            int val = op[i].second;
            v[pos] += val;
        }
        for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

        cout<<"\n";
    }
}
