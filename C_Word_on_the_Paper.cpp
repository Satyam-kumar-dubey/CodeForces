
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        string a = "";

        for (int i = 0; i < 8; i++)
        {
            string s;
            cin>>s;

            for(char c : s)
            {
                if (c != '.')
                a += c;
            }
        }

        cout<<a<<'\n';
    }
}