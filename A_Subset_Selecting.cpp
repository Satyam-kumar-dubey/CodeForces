
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>v(n);
        vector<int>freq(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        int m = 0, temp = 0;

        for (int i = 0; i <= n; i++)
        {
            temp += freq[i];

            if(freq[i] == 0 || temp < k)
            break;

            temp -= k;
            m++;
        }

        cout<<m<<'\n';
    }
}