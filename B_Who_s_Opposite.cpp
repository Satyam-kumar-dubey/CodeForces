
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
        int a,b,c;
        cin>>a>>b>>c;

        int dif = abs(a-b);
        int s = 2*dif;

        if(dif == 0 || a>s || b>s || c>s)
        {
            cout<<-1<<'\n';
            continue;
        }
        else 
        {
            int val = (c + dif);
            if(val > s)
            val -= s;

            cout<<val<<'\n';
        }
    }
    
}
