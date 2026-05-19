
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
        ll n;
        cin>>n;
        string s = to_string(n);

        int c = 0, in = -1;

        for(int i=s.size()-1; i>=0; i--)
        {
           if(s[i] != '0')
           {
                in = i;
                break;
           }
        }
        for(int i=0; i<in; i++)
        {
            if(s[i] != '0')
            c++;
        }
        c += s.size()-(in+1);
        cout<<c<<'\n';
    }
    
}
