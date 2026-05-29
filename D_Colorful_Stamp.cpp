
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

        int it = 0;
        bool f = true;

        while(it < n)
        {
            if(s[it] == 'W')
            {   it++;
                continue;
            }

            bool r = false, b = false;
            while(it < n && s[it] != 'W')
            {
                if(s[it] == 'R')
                r = true;
                else
                b = true;

                it++;
            }
            if(!(r && b))
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
