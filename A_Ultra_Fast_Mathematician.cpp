
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s1,s2,a;
    cin>>s1>>s2;
    
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] == s2[i])
        a += '0';
        else
        a += '1';
    }
    cout<<a<<'\n';
}
