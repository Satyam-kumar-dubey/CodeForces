
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
        int n;
        string s;
        cin>>n>>s;

        string a ;
        int it = n-1;
        while(it >= 0)
        {
            a += s[it];
            if(s[it] == 'a' || s[it] == 'e')
            {
                a += s[it-1];
                int val = it - 2;
                if(val > 0)
                a += '.';
                it--;
            }
            it--;
        }
        reverse(a.begin(),a.end());
        cout<<a<<'\n';
    }
    
}
