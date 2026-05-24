
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int o = 0, tw = 0, th = 0, fr = 0;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x == 1)
        o++;
        else if(x == 2)
        tw++;
        else if(x == 3)
        th++;
        else
        fr++;
    }

    int a = 0;
    a += fr;

    int pair31 = min(o, th);
    a += th;
    o -= pair31;

    a += tw / 2;

    if(tw % 2)
    {
        a++;
        o = max(0, o - 2);
    }

    a += (o + 3) / 4;

    cout<<a<<'\n';
}