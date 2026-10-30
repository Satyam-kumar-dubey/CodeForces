
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
        int n;
        cin>>n;

        int a[50];

        for(int i = 0; i < n; i++)
        cin>>a[i];

        string s;
        cin>>s;

        bool f = true;

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {

                if (a[i] == a[j] && s[i] != s[j])
                {
                    f = false;
                    break;
                }
            }

            if(!f)
            break;
        }

        cout<<(f ? "YES" : "NO")<<'\n';
    }
}
