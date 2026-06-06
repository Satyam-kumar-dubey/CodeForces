
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
        int n;
        string s;
        cin>>n>>s;

        int z = 0, o = 0;
        for(char c : s)
        {
            if(c == '0')
            z++;
            else
            o++;
        }

        if(z == 1 || (z % 2 == 0))
        cout<<"BOB"<<'\n';
        else 
        cout<<"ALICE"<<'\n';
    }
    
}
