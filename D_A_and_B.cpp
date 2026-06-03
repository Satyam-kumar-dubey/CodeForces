
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll slv(char c, string s)
{
    vector<int>ps;
    for(char ch : s)
    {
        if(ch == c)
        ps.push_back(1);
    }

    for(int i=0; i<ps.size(); i++)
    ps[i] -= i;

    int md = ps.size() / 2;
    ll ans = 0;

    for(int i=0; i<ps.size(); i++)
    {
        ans += abs(ps[i] - ps[md]);
    }

    return ans;

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
        string s;
        cin>>n>>s;

        ll a = LLONG_MAX;
        a = min(a,slv('a',s));
        a = min(a,slv('b',s));

        cout<<a<<'\n';
    }
    
}
