
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int first,second;
    cin>>first>>second;

    int left = 0, draw = 0, right = 0;
    for(int i=1; i<=6; i++)
    {
        if(abs(i-first) < abs(i-second))
        left++;
        else if(abs(i-first) == abs(i-second))
        draw++;
        else
        right++;
    }
    cout<<left<<" "<<draw<<" "<<right<<'\n';
}