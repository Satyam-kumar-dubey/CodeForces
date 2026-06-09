
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
        string s,t;
        cin>>s>>t;

        int it = 0;
        bool f = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == t[it])
            it++;
            else if(s[i] == '?')
            {
                s[i] = t[it];
                it++;
            }
            if(it == t.size())
            {
                f = true;
                break;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '?')
            s[i] = 'a';
        }
        if(!f)
        cout<<"NO"<<'\n';
        else
        {
            cout<<"YES"<<'\n';
            cout<<s<<'\n';
        }
    }
    
}
