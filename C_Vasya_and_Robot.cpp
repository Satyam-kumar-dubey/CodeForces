
#include<iostream>
using namespace std;

int main ()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;

    long long x,y;
    cin>>x>>y;

    long long startX = 0, startY = 0;
    for(char c : s)
    {
        if(c == 'R')
        startX++;
        else if(c == 'L')
        startX--;
        else if(c == 'U')
        startY++;
        else
        startY--;
    }
    if(startX == x && startY == y)
    cout<<0<<'\n';

}