
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int c = 0;
    for(char i : s)
    {
        if(i == '4' || i == '7')
        c++;
    }
    cout<<((c == 4 || c == 7) ? "YES" : "NO")<<'\n';
}