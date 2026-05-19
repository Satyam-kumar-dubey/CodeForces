
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int cnt = 0;

        if(b > a)
        cnt++;
        if(c > a)
        cnt++;
        if(d > a)
        cnt++;

        cout<<cnt<<'\n';
    }
}