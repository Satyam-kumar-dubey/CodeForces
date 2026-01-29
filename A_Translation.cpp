
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string s,t;
    cin>>s>>t;

    if(s.size() != t.size())
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    int first = 0, second = t.size()-1;
    while(first < s.size())
    {
        if(s[first] != t[second])
        {
            cout<<"NO"<<'\n';
            return 0;
        }
        first++;
        second--;
    }
    cout<<"YES"<<'\n';
}