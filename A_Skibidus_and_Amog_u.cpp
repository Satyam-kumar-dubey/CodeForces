

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        string a;
        for(int i=0; i<s.size()-2; i++)
        a += s[i];

        a += 'i';
        cout<<a<<'\n';
    }
    
}
