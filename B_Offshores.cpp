
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
        int n,tr,cr;
        cin>>n>>tr>>cr;
        vector<int>v(n);

        int tt = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            tt += (v[i] / tr);
        }
        int am = tt * cr;

        int rs = INT_MIN;
        for(int x : v)
        {
            int c = x / tr;
            int cc = c * cr;
            int tp = am - cc;
            rs = max(rs, tp+x);
        }
        cout<<rs<<'\n';
    }
    
}
