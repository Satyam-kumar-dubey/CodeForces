
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

        string s;
        cin>>s;

        int k = sqrt(n);

        if(k * k != n)
        {
            cout<<"No\n";
            continue;
        }

        bool f = true;

        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < k; j++)
            {
                int idx = i * k + j;

                bool bdr = (i == 0 || j == 0 || i == k - 1 || j == k - 1);

                if (bdr)
                {
                    if(s[idx] != '1')
                    f = false;
                }
                else
                {
                    if(s[idx] != '0')
                    f = false;
                }
            }
        }
        cout<<(f ? "Yes\n" : "No\n");
    }
}