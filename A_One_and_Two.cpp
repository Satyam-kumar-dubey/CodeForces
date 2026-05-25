
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

        vector<int>v(n);

        int tw = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] == 2)
            tw++;
        }
        if(tw == 0)
        {
            cout<<1<<'\n';
            continue;
        }
        if(tw % 2 != 0)
        {
            cout<<-1<<'\n';
            continue;
        }

        int tp = tw / 2, c = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] == 2)
            c++;

            if(c == tp )
            {
                cout<<i+1<<'\n';
                break;
            }
        }
    }
    
}
