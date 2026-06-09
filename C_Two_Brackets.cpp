
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

        int cb = 0, sb = 0, ct = 0;
        for(char c : s)
        {
            if(c == '(')
            cb++;
            else if( c == '[')
            sb++;
            else if(c == ')')
            {
                if(cb > 0)
                {
                    ct++;
                    cb--;
                }
            }
            else if(c == ']')
            {
                if(sb > 0)
                {
                    ct++;
                    sb--;
                }
            }
        }
        cout<<ct<<'\n';
    }
    
}
