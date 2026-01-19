
#include<iostream>
using namespace std;

int main ()
{
    string s;
    cin>>s;

    int start = 0, end = s.size()-1, count = 0;
    while(start < end)
    {
        if(s[start] != s[end])
        count++;
        start++;
        end--;
    }
    if(count == 0 && s.size()%2 != 0)
    cout<<"YES";
    else
    cout<<(count == 1 ? "YES" : "NO");
}