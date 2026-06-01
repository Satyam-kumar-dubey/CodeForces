
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
        int n,q;
        string a,b;
        cin>>n>>q>>a>>b;

        while(q--)
        {
            int l,r;
            cin>>l>>r;
            string a1 = a;
            sort(a1.begin()+l-1, a1.begin()+r);
            string b1 = b;
            sort(b1.begin()+l-1, b1.begin()+r);

            vector<int>af(26,0);
            for(int i=0; i<a1.size(); i++)
            af[a1[i]-'a']++;

            vector<int>bf(26,0);
            for(int i=0; i<b1.size(); i++)
            bf[b1[i] - 'a']++;

            int ct = 0;
            for(int i=0; i<26; i++)
            {
                if(af[i] != 0  && bf[i] == 0)
                ct += af[i];
            }
            cout<<ct<<'\n';
        }
    }
    
}
