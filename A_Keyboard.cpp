
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char c;
    string s;
    cin>>c>>s;

    string a = "qwertyuiop";
    string b = "asdfghjkl;";
    string d = "zxcvbnm,./";
    

    if(c == 'L')
    {
        string ans;
        for(char ch : s)
        {
            int pos = a.find(ch);
            if(pos != string::npos)
            ans += a[pos + 1];
            else
            {
                pos = b.find(ch);
                if(pos != string::npos)
                ans += b[pos + 1];
                else
                {
                    pos = d.find(ch);
                    ans += d[pos + 1];
                }
            }
        }
        cout<<ans<<"\n";
    }
    else
    {
        string ans;
        for(char ch : s)
        {
            int pos = a.find(ch);
            if(pos != string::npos)
            ans += a[pos - 1];
            else
            {
                pos = b.find(ch);
                if(pos != string::npos)
                ans += b[pos - 1];
                else
                {
                    pos = d.find(ch);
                    ans += d[pos - 1];
                }
            }
        }
        cout<<ans<<"\n";
    }
}
