
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

        vector<int>f(26,0);
        for(char c : s)
        f[c - 'a']++;
        
        bool fl = false;
        for(int i=0; i<26; i++)
        {
            if(f[i] == 0)
            {
                cout<<(char)(i + 'a')<<'\n';
                fl = true;
                break;
            }
        }
        if(fl)
        continue;

        set<string>sb;
        for(int i=0; i<n; i++)
        {   
            string tp;
            tp += s[i];
            sb.insert(tp);
            for(int j=i+1; j<n; j++)
            {
                tp += s[j];
                sb.insert(tp);
            }
        }
        string a;
        for(int i=0; i<26; i++)
        {
            a += (char)(i + 'a');
            if(!sb.count(a))
            {
                cout<<a<<'\n';
                break;
            }
        }
    }
}
