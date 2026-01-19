
#include<iostream>
using namespace std;

string solve(string s)
{
    string temp = "hello";
    int temp1 = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == temp[temp1])
        temp1++;
        
        if(temp1 == temp.size())
        return "YES";
    }

    return "NO";
}
int main ()
{
    string s;
    cin>>s;

    cout<<solve(s);
}