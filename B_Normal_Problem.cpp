
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

        string a;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == 'p')
            a += 'q';
            else if(s[i] == 'q')
            a += 'p';
            else 
            a += s[i];
        }
        cout<<a<<'\n';
    }
    
}
