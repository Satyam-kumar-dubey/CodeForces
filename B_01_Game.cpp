
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

        int z = 0, o = 0;
        for(char c : s)
        {
            if(c == '0')
            z++;
            else 
            o++;
        }
        int p = min(o,z);
        cout<<(p % 2 == 0 ? "NET" : "DA")<<'\n';
    }
    
}
