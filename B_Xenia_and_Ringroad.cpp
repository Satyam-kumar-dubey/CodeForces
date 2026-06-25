#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long t = 0;
    long long f = 1;

    for (long long i = 0; i < m; i++) {
        long long k;
        cin >> k;

        if (k >= f)
        {
            t += (k - f);
        }
        else
        {
            t += (n - f) + (k % n);
        }

        f = k;
    }

    cout << t << endl;
}