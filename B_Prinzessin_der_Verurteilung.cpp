
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


        for(char i = 'a'; i<='z' && !fl;  i++)
        {
            for(char j='a'; j<='z'; j++)
            {
                string tp = "";
                tp += i;
                tp += j;

                if(s.find(tp) == string::npos)
                {
                    cout<<tp<<'\n';
                    fl = true;
                    break;
                }
            }
        }
        if(fl)
        continue;

        for(char i='a'; i<='z' && !fl; i++)
        {
            for(char j='a'; j<='z' && !fl; j++)
            {
                for(char k='a'; k<='z'; k++)
                {
                    string tp = "";
                    tp += i;
                    tp += j;
                    tp += k;

                    if(s.find(tp) == string::npos)
                    {
                        cout<<tp<<'\n';
                        fl = true;
                        break;
                    }
                }
            }
        }

    }
}
