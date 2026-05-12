
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

        int ct = 0, it = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] > s[i+1])
            ct++;
        }
        cout<<ct+1<<'\n';
    }
}