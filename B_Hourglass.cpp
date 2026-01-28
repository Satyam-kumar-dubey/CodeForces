
#include<iostream>
using namespace std;

int solve(int s, int k, int m)
{
    int last = (m / k) * k;
    int flips = last / k;
    int remainingTime = m - last;

    int st;
    if (k >= s)
    st = s;
    else
    st = (flips % 2 == 0) ? s : k;

    int temp = st - remainingTime;
    return (temp < 0) ? 0 : temp;
}

int main ()
{
    int test;
    cin>>test;
    while (test--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<solve(a, b, c)<<endl;
    }
}