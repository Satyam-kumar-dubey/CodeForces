
#include<bits/stdc++.h>
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
        long long k;
        cin>>n>>k;

        vector<tuple<long long,long long,long long>>v;

        for(int i=0; i<n; i++)
        {
            long long l,r,real;
            cin>>l>>r>>real;
            v.push_back({l, r, real});
        }

        sort(v.begin(), v.end()); 

        for(int i=0; i<n; i++)
        {
            auto[l, r, real] = v[i];
            if(k >= l && k <= r)
            k = real;
        }
        cout<<k<<"\n";
    }
}
