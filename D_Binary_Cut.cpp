
#include<bits/stdc++.h>
using namespace std;

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

        int ct = 1;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] != s[i+1])
            ct++;
        }
        if(s.find("01") != string::npos)
        ct--;

        cout<<ct<<'\n';
    }
}