
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        string f,s;

        cin>>n>>m>>f>>s;

        if(s.size() > f.size())
        {
            cout << "NO\n";
            continue;
        }

        for(int i = 0; i < s.size(); i++)
        {
            bool removed = false;

            for(int j = 0; j < f.size(); j++)
            {
                if(f[j] == s[i] && !removed)
                {
                    f[j] = '#';
                    s[i] = '#';
                    removed = true;
                }
            }
        }

        string rem, rem2;

        for(char c : f)
        {
            if(c != '#')
            rem += c;
        }

        for(char c : s)
        {
            if(c != '#')
            rem2 += c;
        }

        if(rem.size() != 3 || !rem2.empty())
        {
            cout << "NO\n";
            continue;
        }

        sort(rem.begin(), rem.end());

        if(rem == "isx")
        cout << "YES\n";
        else
        cout << "NO\n";
    }
}
