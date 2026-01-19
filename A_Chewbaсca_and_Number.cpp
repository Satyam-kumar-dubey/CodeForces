#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string number(string s)
{
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        int d = s[i] - '0';
        int dig = min(d, 9 - d);

       
        if (i == 0 && dig == 0)
            continue;

        s[i] = char(dig + '0');
    }
    return s;
}

int main ()
{
    string n;         
    cin >> n;
    cout << number(n);
}
