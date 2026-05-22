
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int si;
    cin>>si;

    string s;
    cin>>s;

    int o=0,n=0,e=0,z=0,r=0;
    for(char c : s)
    {
        if(c == 'o')
        o++;
        else if(c == 'n')
        n++;
        else if(c == 'e')
        e++;
        else if(c == 'z')
        z++;
        else if(c == 'r')
        r++;
    }
    int one = min(o,n);
    int zero = min(z,r);

    while(one--)
    cout<<1<<" ";
    while(zero--)
    cout<<0<<" ";
}
