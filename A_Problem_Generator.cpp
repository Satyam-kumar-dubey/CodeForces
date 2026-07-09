#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> freq(7, 0);

        for (char c : s)
        {
            freq[c - 'A']++;
        }

        int sum = 0;

        for (int i = 0; i < 7; i++)
        {
            if (freq[i] < m)
            {
                sum += (m - freq[i]);
            }
        }

        cout << sum << '\n';
    }

}