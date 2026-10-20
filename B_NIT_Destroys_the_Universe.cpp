
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
        int n;
        cin>>n;

        vector<ll>v(n);
        for(auto &x : v)
        cin>>x;

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] != 0 && (i == 0 || v[i-1] == 0))
            cnt++;
        }
        cout<<min(cnt,2)<<'\n';
    }
}