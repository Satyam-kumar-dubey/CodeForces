
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
        int n;
        cin>>n;
        int sum = 0;
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout<<sum<<'\n';
    }
}