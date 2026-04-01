
#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,t;
    cin>>s>>t;

    int i = s.size() - 1;
    int j = t.size() - 1;
    int c = 0;

    while (i >= 0 && j >= 0 && s[i] == t[j])
    {
        c++;
        i--;
        j--;
    }
    cout<<s.size() + t.size() - 2 * c;
}