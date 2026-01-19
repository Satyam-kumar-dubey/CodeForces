#include <iostream>
using namespace std;

bool color(int arr[], int n)
{
    bool b = false;
    int c = 1;

    if (arr[0] % 2 == 0)
    {
        b = true;
    }

    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 0 && !b)
        {
            b = true;
            c++;
        }
        else if (arr[i] % 2 != 0 && b)
        {
            b = false;
            c++;
        }
    }

    if (c == i)
    {
        return true;
    }
    return false;
}

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << (color(arr, n) ? "YES" : "NO") << endl;
    }

    return 0;
}