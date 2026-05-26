
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
        
        int y = 0;
        for(char c : s)
        {
            if(c == 'Y')
            y++;
        }
        cout<<(y <= 1 ? "YES" : "NO")<<'\n';
    }
    
}
