
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a > b)
        swap(a,b);

        bool f = (a < c && c < b);
        bool s = (a < d && d < b);

        cout<<(f != s ? "YES" : "NO")<<'\n';
    }
}