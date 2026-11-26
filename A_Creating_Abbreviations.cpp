
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
        ll n, m; cin>>n>>m;

        vector<bool>ch(26,false);
        for(int i=0; i<n; i++)
        {
            string s; cin>>s;
            ch[s[0]-'a'] = true;
        }

        bool f = true;
        for(int i=0; i<m; i++)
        {
            string abb; cin>>abb;
            for(char &c : abb)
            {
                if(!ch[c-'A'])
                {
                    f = false;
                    break;
                }
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}