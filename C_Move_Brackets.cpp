#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0, m = 0;

        for (char ch : s)
        {
            if (ch == '(')
            {
                c++;
            }
            else
            {
                if (c == 0)
                    m++;
                else
                    c--;
            }
        }

        cout << m << '\n';
    }

}