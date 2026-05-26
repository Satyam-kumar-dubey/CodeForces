
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
        string s;
        cin>>s;

        int ct = 0;
        if(s[0] == 'u')
        {
            s[0] = 's';
            ct++;
        }
        if(s[s.size()-1] == 'u')
        {
            s[s.size()-1] = 's';
            ct++;
        }

        for(int i=1; i<s.size()-2; i++)
        {
            if(s[i] == 'u')
            {
                if(s[i-1] != 's')
                {
                    s[i-1] = 's';
                    ct++;
                }
                if(s[i+1] != 's')
                {
                    s[i+1] = 's';
                    ct++;
                }
            }
        }
        cout<<ct<<'\n';
    }
    
}
