
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(string s)
{
    for(char c : s)
    {
        if(c == '?')
        return true;
    }
    return false;
}

char miss (string s)
{
    int a = 0, b=0, c=0;
    for(char c : s)
    {
        if(c == 'A')
        a++;
        else if(c == 'B')
        b++;
        else if(c == 'C')
        c++;
    }
    if(a == 0)
    return 'A';
    else if(b == 0)
    return 'B';
    else if(c == 0)
    return 'C';
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;

        bool f1 = check(a);
        bool f2 = check(b);
        bool f3 = check(c);

        if(f1)
        cout<<miss(a)<<'\n';
        else if(f2)
        cout<<miss(b)<<'\n';
        else if(f3)
        cout<<miss(c)<<'\n';
    }
    
}
