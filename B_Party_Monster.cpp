
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
        cin>>n;

        string s;
        cin>>s;

        int o = 0, cl = 0;
        for(char c : s)
        {
            if(c == ')')
            cl++;
            else
            o++;
        }
        cout<<(o == cl ? "YES" : "NO")<<'\n';
    }
    
}
