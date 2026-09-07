#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int c = 0;

        for (int i = 0; i < n; i += k)
        {
            bool zero = false;

            for (int j = i; j < i + k; j++)
            {
                if (s[j] == '0')
                {
                    zero = true;
                    break;
                }
            }

            if (!zero)
                c++;
        }

        cout << c << endl;
    }

    return 0;
}