
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--)
    {
        int i,j;
        cin>>i>>j;
        cout<< i * j + 1 <<'\n';
    }
}