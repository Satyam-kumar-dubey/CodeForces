
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

        vector<int>fr(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            fr[x]++;
        }

        int sc = 0;
        for (int x = 1; x <= n; x++)
        sc += fr[x] / 2;

        cout<<sc<<'\n';
    }
}