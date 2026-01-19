
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int quotient = n/5;
    int remainder = n%5;

    cout<< (remainder == 0 ? quotient : quotient+1);
}
    