
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b >= 10 || b+c >= 10 || a+c >= 10)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}