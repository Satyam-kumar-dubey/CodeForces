
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int c = 0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if((b - a) >= 2)
        c++;
    }

    cout<<c<<'\n';
}