
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    int ct = 0, x = 0;

    while(a--)
    {
        ct += 1;
        x +=1;

        if(x == b)
        {
            x = 0;
            a += 1;
        }
    }
    cout<<ct<<'\n';
    
}
