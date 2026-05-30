
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s.size() == 1)
        {
            cout<<1<<'\n';
            continue;
        }

        int z = 0, o = 0;
        for(char c : s)
        {
            if(c == '0')
            z++;
            else
            o++;
        }

        bool f = false;
        for(char c : s)
        {
            if(c == '0')
            {
                if(o >0)
                o--;
                else
                {
                    cout<<z<<'\n';
                    f = true;
                    break;
                }
            }
            else
            {
                if(z > 0)
                z--;
                else
                {
                    cout<<o<<'\n';
                    f = true;
                    break;
                }
            }
        }
        if(!f)
        cout<<0<<'\n';
    }
}