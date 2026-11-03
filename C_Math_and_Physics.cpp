
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

        int one = 0, sm = 0;
        
        vector<int>v(n);
        for(auto &x : v)
        {
            cin>>x;

            sm += x;
            if(x == 1)
            one++;
        }

        if(one == n)
        {
            cout<<-1<<'\n';
            continue;
        }
        else if(sm == (n-2) + v[0] + v[n-1])
        cout<<(v[0] + v[n-1] -1)<<"\n";
        else
        cout<<sm-1<<'\n';
    }
}