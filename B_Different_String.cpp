
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;
        
        string t = s;
        sort(t.begin(),t.end());

        if(t.front() == t.back())
        cout<<"NO"<<'\n';
        else
        {
            if(t == s)
            reverse(t.begin(),t.end());
            cout<<"YES"<<'\n';
            cout<<t<<'\n';
        }
    }
}