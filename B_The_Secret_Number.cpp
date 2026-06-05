
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    vector<ll>div;
    ll val = 10;

    for(int i=1; i<=18; i++)
    {
        div.push_back(val + 1);
        if(i < 18)
        val *= 10;
    }
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll>a;
        for(auto &it : div)
        {
            if(n%it == 0)
            a.push_back((n/it));
        }
        reverse(a.begin(),a.end());

        if(a.size() == 0)
        {
            cout<<0<<'\n';
            continue;
        }
        cout<<a.size()<<'\n';
        for(auto &x : a)
        cout<<x<<" ";

        cout<<'\n';
    }
    
}
