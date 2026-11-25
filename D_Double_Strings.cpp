
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

        vector<string>v(n);
        unordered_set<string>st;

        for(auto &x : v)
        {
            cin>>x;
            st.insert(x);
        }

        string ans;
        for(auto &s : v)
        {
            bool fl = false;
            for(int j=1; j<s.size(); j++)
            {
                string f = s.substr(0,j);
                string l = s.substr(j);

                if(st.count(f) && st.count(l))
                {
                    fl = true;
                    break;
                }
            }
            (fl ? ans.push_back('1') : ans.push_back('0'));
        }
        cout<<ans<<'\n';
    }
}