#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;

    int u=0,l=0;

    for (char c : s)
    {
        if (isupper(c))
        u++;
        else
        l++;
    }

    if (u>l)
    {
        for(char &c : s)
        c = toupper(c);
    } 
    else
    {
        for(char &c : s)
        c = tolower(c);
    }

    cout<<s;
}