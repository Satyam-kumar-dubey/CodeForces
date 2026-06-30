
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
        int n;
        cin>>n;

        vector<int>x(n), y(n);
        in(x);
        in(y);

        vector<int>d(n);
        for(int i=0; i<n; i++)
        d[i] = y[i] - x[i];
    
        sort(d.begin(),d.end());

        int st = 0, en = n-1, grp = 0;
        while(st < en)
        {
            if(d[st] + d[en] >= 0)
            {
                grp++;
                st++;
                en--;
            }
            else
            st++;
        }
        cout<<grp<<'\n';
    }
    
}
