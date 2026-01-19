
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main ()
{
    string s;
    cin>>s;

    int upper = 0;
    int lower = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(int(ch)>=65 && int(ch)<=90)
        upper++;
        else
        lower++;
    }
    if(lower == upper)
    {
        for(char &c: s)
        c = tolower(c);

        cout<<s;
    }
    else if(lower > upper)
    {
        for(char &c: s)
        {
            if(int(c)>=65 && int(c)<=90)
            c = tolower(c);
        }
        cout<<s;
    }
    else
    {
        for(char &c: s)
        {
            if(int(c)>=97 && int(c)<=122)
            c = toupper(c);
        }
        cout<<s;
    }
}