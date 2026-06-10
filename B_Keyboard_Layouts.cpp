
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,t,str;
    cin>>s>>t>>str;

    map<char,int>fl, sl;
    for(int i=0; i<s.size(); i++)
    {
        char c = s[i];
        fl[c] = i;
    }
    for(int i=0; i<t.size(); i++)
    {
        char c = t[i];
        sl[c] = i;
    }

    string a;
    for(int i=0; i<str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            char c = str[i];
            if(isupper(c))
            {
                char ch = tolower(c);
                int pos = fl[ch];
                char res = t[pos];
                a += (char)toupper(res);
            }
            else
            {
                char ch = str[i];
                int pos = fl[ch];
                char res = t[pos];
                a += res;
            }
        }
        else 
        a += str[i];
    }
    cout<<a<<'\n';
    
}
