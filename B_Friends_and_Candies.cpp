
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

        int s = 0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s += v[i];
        }

        int eq = s / n;
        int re = 0, gv = 0, gc = 0;

        for(int x : v)
        {
            if(x > eq)
            {
                gv += x - eq;
                gc++;
            }
            else if( x < eq)
            re += eq - x;
        }
        if(gv == re)
        cout<<gc<<'\n';
        else
        cout<<"-1\n";
    }
    
}
