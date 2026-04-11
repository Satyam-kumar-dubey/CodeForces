#include<iostream>
#include<string>
using namespace std;

int main()
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

        bool x = false;
        for (int i = 0; i + 2 < n; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                x=true;
                break;
            }
        }
        if(x)
        cout<<2<<'\n';
        else
        {
            int t=0;
            for (char c : s)
            {
                if (c == '.')
                t++;
            }
            cout<<t<<'\n';
        }
    }
}