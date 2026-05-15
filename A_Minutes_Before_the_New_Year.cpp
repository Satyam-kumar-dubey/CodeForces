
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int hr,mn;
        cin>>hr>>mn;

        cout<<(1440 - ((hr * 60) + mn ))<<'\n';
    }
}