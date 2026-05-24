
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    for(char c : s)
    {
        if(c == 'H' || c == 'Q' || c == '9')
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    
}
