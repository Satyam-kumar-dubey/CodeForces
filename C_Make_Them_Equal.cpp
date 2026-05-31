
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        char c;
        string s;
        cin>>n>>c>>s;

        bool f = true;
        for (char ch : s)
        {
            if (ch != c)
            {
                f = false;
                break;
            }
        }

        if (f)
        {
            cout<<0<<"\n";
            continue;
        }

        if (s[n - 1] == c)
        {
            cout<<1<<"\n";
            cout<<n<<"\n";
        }
        else
        {
            cout<<2<<"\n";
            cout<<n<<" "<<n - 1<<"\n";
        }
    }
}