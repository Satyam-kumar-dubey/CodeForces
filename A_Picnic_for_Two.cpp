
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;

        set<ll> su, au;

        ll val1 = 0, val2 = 0;

        su.insert(0);
        au.insert(0);

        while(true)
        {
            val1 = (val1 + a) % n;

            if(!su.count(val1))
            su.insert(val1);
            else
            break;
        }

        while(true)
        {
            val2 = (val2 + b) % n;

            if(!au.count(val2))
            au.insert(val2);
            else
            break;
        }

        ll cnt = 0;

        if(su.size() <= au.size())
        {
            for(auto x : su)
            {
                if(au.count(x))
                cnt++;
            }
        }
        else
        {
            for(auto x : au)
            {
                if(su.count(x))
                cnt++;
            }
        }

        cout<<cnt<<'\n';
    }
}
