
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;

    if((a + b > 0) && (abs(a - b) <= 1))
    cout << "YES";
    else
    cout << "NO";
}