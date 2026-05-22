#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[(i + 1) % n])
            d++;
        }

        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[(i + 1) % n])
            {
                f = true;
                break;
            }
        }
        cout << d + (f ? 1 : 0) << "\n";
    }
}