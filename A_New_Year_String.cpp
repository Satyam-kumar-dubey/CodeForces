#include <iostream>
#include <string>
using namespace std;

int newyear(const string& n)
{
    int id1 = n.find("2026");
    int id2 = n.find("2025");

    if (id1 != string::npos || id2 == string::npos)
        return 0;

    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--)
    {
        int m;
        cin >> m;
        cin.ignore();          
        string s;
        getline(cin, s);

        cout << newyear(s) << "\n";
    }
}