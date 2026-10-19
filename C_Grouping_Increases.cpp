
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
        cin>>n;

        vector<int>v(n);
        for(auto &x: v)
        cin>>x;

        int fe = INT_MAX, se = INT_MAX, pe = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] <= fe)
            fe = v[i];
            else if(v[i] <= se)
            se = v[i];
            else
            {
                pe++;
                fe = v[i];
            }
            if(fe > se)
            swap(fe,se);
        }
        cout<<pe<<'\n';
    }
}