
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int z=0, o=0, t=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x == 0)
            z++;
            else if(x == 1)
            o++;
            else
            t++;
        }
        int a = 0;
        a += z;
        int mn = min(o, t);
        a += mn;

        o -= mn;
        t -= mn;

        a += (o/3) + (t/3);
        cout<<a<<'\n';
    }
}