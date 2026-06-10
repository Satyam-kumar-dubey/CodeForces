
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n)
{
    if(n < 2)
    return false;
    
    for(ll i=2; i*i<=n; i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
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

        vector<int>o,e;
        for(int i=1; i<=n; i++)
        {
            if(i % 2 == 0)
            e.push_back(i);
            else
            o.push_back(i);
        }

        int id = -1;
        int l = o[o.size()-1];
        for(int i=0; i<e.size(); i++)
        {
            ll s = l + e[i];
            if(!check(s))
            {
                id = i;
                break;
            }
        }

        if(id == -1)
        {
            cout<<-1<<'\n';
            continue;
        }
        o.push_back(e[id]);
        for(int i=0; i<e.size(); i++)
        {
            if(i != id)
            o.push_back(e[i]);
        }

        for(int x : o)
        cout<<x<<" ";
        cout<<'\n';
    }
    
}
