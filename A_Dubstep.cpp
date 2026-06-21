#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    for(int i = 0; i + 2 < s.size(); )
    {
        if (s.substr(i, 3) == "WUB")
        {
            s.replace(i, 3, " ");
            i++;
        }
        else
        {
            i++;
        }
    }

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        cout << word << " ";
    }
}