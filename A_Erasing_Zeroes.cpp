
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
        string st;
        cin>>st;

        int f = -1, s = -1;

        for(int i=0; i<st.size(); i++)
        {
            if(st[i] == '1')
            {
               if(f == -1)
               f = i;
               else
               s = i;
            }
        }
        int a = 0;
        for(int i=f; i<=s; i++)
        {
            if(st[i] == '0')
            a++;
        }
        cout<<a<<'\n';
    }
    
}
