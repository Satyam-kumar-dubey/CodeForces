
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    int f = 0, sv = 0;
    for(char c : s)
    {
        if(c == '4')
        f++;
        else if(c == '7')
        sv++;
    }
    if(f == 0 && sv == 0)
    cout<<-1<<'\n';
    else if(f >= sv)
    cout<<4<<'\n';
    else 
    cout<<7<<'\n';
}
