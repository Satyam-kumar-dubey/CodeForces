
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
        int n;
        long long m;
        cin>>n>>m;
        vector<pair<long long,long long>>v(n+1);
        v[0] = {0,0};

        for(int i=1; i<n+1; i++)
        {
            cin>>v[i].first;
            cin>>v[i].second;
        }
        long long sc = 0;

        for(int i=1; i<n+1; i++)
        {
            long long tp = v[i].first - v[i-1].first;
            long long cr = v[i].second;
            long long pr = v[i-1].second;

            if( cr == pr )
            sc += (tp % 2 == 0 ? tp : (tp-1));
            else
            sc += (tp % 2 == 0 ? (tp - 1) : tp);
        }
        if(v[n].first != m)
        sc += (m - v[n].first);

        cout<<sc<<"\n";
    }
}