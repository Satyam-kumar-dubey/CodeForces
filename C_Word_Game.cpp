
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
        int n;
        cin>>n;
        set<string>f,s,th;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            f.insert(s);
        }
        for(int i=0; i<n; i++)
        {
            string st;
            cin>>st;
            s.insert(st);
        }
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            th.insert(s);
        }
        int sc1 = 0 , sc2 = 0, sc3 = 0;
        for(const string &str : f)
        {
            if(s.count(str) && th.count(str))
            sc1 += 0;
            else if(s.count(str) || th.count(str))
            sc1 += 1;
            else
            sc1 += 3;
        }
        for(const string &str : s)
        {
            if(f.count(str) && th.count(str))
            sc2 += 0;
            else if(f.count(str) || th.count(str))
            sc2 += 1;
            else
            sc2 += 3;
        }
        for(const string &str : th)
        {
            if(s.count(str) && f.count(str))
            sc3 += 0;
            else if(s.count(str) || f.count(str))
            sc3 += 1;
            else
            sc3 += 3;
        }
        cout<<sc1<<" "<<sc2<<" "<<sc3<<'\n';
    }
}