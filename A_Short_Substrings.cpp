
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

        string a = "";
        for(int i=0; i<s.size(); i=i+2)
        a += s[i];

        a += s[s.size()-1];
        cout<<a<<'\n';
    }
}