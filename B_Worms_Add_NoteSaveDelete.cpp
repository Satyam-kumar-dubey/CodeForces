
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++)
    cin>>b[i];

    vector<int>ps(n);
    ps[0] = v[0];
    for(int i=1; i<n; i++)
    ps[i] = ps[i-1] + v[i];

    for(int i=0; i<m; i++)
    {
        int idx = lower_bound(ps.begin(), ps.end(), b[i]) - ps.begin();
        cout<<idx+1<<'\n';
    }
}
