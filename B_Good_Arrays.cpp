
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s;
        cin>>s;

        vector<int>v(s);
        for(int i=0; i<s; i++)
        cin>>v[i];

        if(v.size() == 1)
        {
            cout<<"NO"<<'\n';
            continue;
        }

        ll sm = 0, c = 0;
        for(int x : v)
        {
            sm += x;
            if(x == 1)
            c++;
        }

        if(sm == v.size())
        {
            cout<<"NO"<<'\n';
            continue;
        }
        else if(sm >= v.size()+c)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}