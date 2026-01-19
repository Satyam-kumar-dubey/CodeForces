#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        long long total = a+b+c;
        long long minHealth = total / 9;

        if(total % 9 == 0 && a>=minHealth && b>=minHealth && c>=minHealth)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}