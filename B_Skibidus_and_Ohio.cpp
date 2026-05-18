

#include<bits/stdc++.h>
using namespace std;

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

        int c = 0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
            c++;
        }
        cout<<(c == 0 ? s.size() : 1)<<'\n';
    }
}
