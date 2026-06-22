
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int x = stoi(s);
        int val = sqrt(x);

        if(val * val == x)
        cout<<0<<" "<<val;
        else
        cout<<-1;

        cout<<'\n';
    }
    
}
