
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    bool up = true, eo = true;

    for(char c : s)
    {
        if(!isupper(c))
        up = false;
    }
    for(int i=1; i<s.size(); i++)
    {
        if(!isupper(s[i]))
        eo = false;
    }

    if(up || eo)
    {
        for(char &c : s)
        {
            if(islower(c))
            c = toupper(c);
            else
            c = tolower(c);
        }
    }
    cout<<s<<'\n';
}
