#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, R;
        cin >> x >> y >> R;

        for (int i = -R; i <= R; i++)
        {   
            bool f = true;
            for (int j = -R; j <= R; j++)
            {
                if (i * i + j * j == R * R)
                {
                    cout << x + i << ' ' << y + j << '\n';
                    f = false;
                    break;
                }
            }
            if(!f)
            break;
        }
    }

    return 0;
}