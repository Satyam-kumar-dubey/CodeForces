
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;
    string s;
    cin >> a >> b >> c >> d >> s;

    long long r = 0;
    for(char ch: s)
    {
        if(ch =='1')
        r += a;
        else if(ch == '2')
        r += b;
        else if(ch == '3')
        r += c;
        else 
        r += d;
    }
    cout<<r<<'\n';
}