
#include<bits/stdc++.h>
using namespace std;

vector<int>v(26,0);
int slv (string s)
{
    int d = 0;
    for(char c: s)
    {
        if(v[c-'a'] == 0)
        d++;
        v[c-'a']++;
    }
    fill(v.begin(),v.end(),0);
    return d;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n , a = 0;
        string s;
        cin>>n>>s;

        for(int i=0; i<s.size(); i++)
        {
            int l = slv(s.substr(0,i)) + slv(s.substr(i));
            a = max(a,l);
        }
        cout<<a<<'\n';
    }
}