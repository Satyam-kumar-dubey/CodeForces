
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    for(int i=0; i<s.size()-2; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            s[i] = '*';
            s[i+1] = '*';
            s[i+2] = '*';
        }
    }
    
    int it = 0;
    while(it < s.size())
    {
        string a;
        while(s[it] != '*')
        {
            a += s[it];
            it++;
        }
        it++;
        if(!a.empty())
        cout<<a<<" ";
    }
    
}
