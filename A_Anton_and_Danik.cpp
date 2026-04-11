
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    string s;
    cin>>s;
    int a=0, d=0;

    for(char c: s)
    {
        if(c == 'A')
        a++;
        else
        d++;
    }
    
    if(a > d)
    cout<<"Anton"<<'\n';
    else if(d > a)
    cout<<"Danik"<<'\n';
    else
    cout<<"Friendship"<<'\n';
}