
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;

    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;

        ll cnt = 0;
        if(s[0] != 'R') cnt++;

        for(int i=1; i<n; i++)
        {
            if(s[i] == s[i-1]) cnt++;
        }
        cout<<cnt<<'\n';
    }
}