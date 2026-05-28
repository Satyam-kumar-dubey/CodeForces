
#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;

    cin>>n>>s;

    vector<int>v(s.size(),0);
    if(s[0] == '(')
    v[0] = 1;
    else
    v[0] = -1;

    for(int i=1; i<s.size(); i++)
    {
        if(s[i] == '(')
        v[i] = v[i-1]+1;
        else
        v[i] = v[i-1]-1;
    }

    if(v[s.size()-1] == 0)
    {
        cout<<0<<'\n';
        return 0;
    }

    vector<int>sf(s.size()), pf(s.size());
    sf[s.size()-1] = v[s.size()-1];
    pf[0] = v[0];

    for(int i=s.size()-2; i>=0; i--)
    sf[i] = min(sf[i+1],v[i]);

    for(int i=1; i<s.size(); i++)
    pf[i] = min(pf[i-1],v[i]);

    int c = 0;
    if(v[s.size()-1] == 2)
    {
        for(int i=0; i<s.size(); i++)
        {
           if(s[i] == '(')
           {
                bool fr = (i == 0 || pf[i-1] >= 0);
                bool se = sf[i] >= 2;

                (fr && se ? c++ : c+0);
           }
        }
    }
    else if(v[s.size()-1] == -2)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ')')
            {
                bool fr = (i == 0 || pf[i-1] >= 0);
                bool se = sf[i] >= -2;

                (fr && se ? c++ : c+0);
            }
        }
    }
    cout<<c<<'\n';
}
