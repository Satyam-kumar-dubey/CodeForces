#include <iostream>

using namespace std;

int fallen(int s, int k, int m)
{
    int lastflip = (m / k) * k;
    int flips = lastflip / k;
    int timeleft = m - lastflip;

    int sandtop;
    if (k >= s)
        sandtop = s;
    else
        sandtop = (flips % 2 == 0) ? s : k;

    int t = sandtop - timeleft;
    return (t < 0) ? 0 : t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests--)
    {
        int s, k, m;
        cin >> s >> k >> m;
        cout << fallen(s, k, m) << '\n';
    }
    return 0;
}