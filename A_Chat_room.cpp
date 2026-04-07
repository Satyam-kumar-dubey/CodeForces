#include<iostream>
using namespace std;

string check(string s)
{
    string t = "hello";
    int t1 = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == t[t1])
        t1++;
        
        if(t1 == t.size())
        return "YES";
    }
    return "NO";
}
int main ()
{
    string x;
    cin>>x;

    cout<<check(x);
}