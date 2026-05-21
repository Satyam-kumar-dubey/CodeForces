
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
        int n;
        string s;
        cin>>n>>s;

        vector<int>v(26,0);
        char cr = s[0];
        bool f = true;
        for(char c : s)
        {
            if(c == cr)
            continue;
            else
            {
                v[cr - 'A']++;
                if(v[c - 'A'] != 0)
                {
                    f = false;
                    break;
                }
                cr = c;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
