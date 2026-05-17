
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin>>b>>s;

            int u = 0, d = 0;
            for(char c : s)
            {
                if(c == 'U')
                u++;
                else d++;
            }

            int n = u - d;

            v[i] = (v[i] - n) % 10;
            if(v[i] < 0)
            v[i] += 10;
        }

        for(int x : v)
        cout << x << " ";
        cout << '\n';
    }
}