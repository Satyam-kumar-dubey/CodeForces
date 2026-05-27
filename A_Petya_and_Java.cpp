
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

    if (n.size() < 3 || (n.size() == 3 && n <= "127"))
    cout << "byte";
    else if (n.size() < 5 || (n.size() == 5 && n <= "32767")) 
    cout << "short";
    else if (n.size() < 10 || (n.size() == 10 && n <= "2147483647")) 
    cout << "int";
    else if (n.size() < 19 || (n.size() == 19 && n <= "9223372036854775807"))
    cout << "long";
    else 
    cout << "BigInteger";

    return 0;
}