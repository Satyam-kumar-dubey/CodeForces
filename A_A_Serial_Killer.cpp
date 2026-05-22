
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string f, s;
    cin>>f>>s;
    int n;
    cin>>n;

    cout<<f<<" "<<s<<'\n';

    while(n--)
    {
        string m, r;
        cin>>m>>r;

        if(f == m)
        f = r;
        else
        s = r;

        cout<<f<<" "<<s<<'\n';
    }
}