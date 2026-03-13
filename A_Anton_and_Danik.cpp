
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

    int A_count = 0, D_count = 0;
    for(char c : s)
    {
        if(c == 'A')
        A_count++;
        else
        D_count++;
    }

    if(A_count == D_count)
    cout<<"Friendship"<<'\n';
    else if ( A_count > D_count)
    cout<<"Anton"<<'\n';
    else
    cout<<"Danik"<<'\n';
}