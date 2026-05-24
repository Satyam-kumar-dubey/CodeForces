
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    for(char &c : s)
    c = tolower(c);
    
    string a;
    for(char c : s)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        continue;
        else
        {
            a += '.';
            a += c;
        }
    }
    cout<<a<<'\n';
}
