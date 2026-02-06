
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    while(test--)
    {

        string s;
        cin>>s;

        if(s == "bca" || s == "cab")
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
}