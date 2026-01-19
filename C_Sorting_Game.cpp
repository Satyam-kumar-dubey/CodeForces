#include <iostream>
#include<string>
#include <vector>
using namespace std;

void alicebob(const string &s)
{
    if (s.find("10") == string::npos)
    {
        cout << "Bob\n";
        return;
    }

    cout << "Alice\n";

    int n = s.size();
    vector<int> idx;

    // count zeros
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            o++;
    }

    for (int i = 0; i < o; i++)
    {
        if (s[i] == '1')
        {
            idx.push_back(i + 1);
        }
    }

    for (int i = o; i < n; i++)
    {
        if (s[i] == '0')
        {
            idx.push_back(i + 1); 
        }
    }

    cout << idx.size() << "\n";
    for (int x : idx)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        alicebob(s);
    }

    return 0;
}