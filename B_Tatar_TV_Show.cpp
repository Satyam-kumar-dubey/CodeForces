
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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        bool f = true;

        for(int j = 0; j < k; j++)
        {
            int ones = 0;

            for(int i = j; i < n; i += k)
            ones += (s[i] == '1');

            if(ones & 1)
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}