
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long s=0;
    for(long long j=1; ;j++)
    {
        s += j;
        if(s==n)
        {
            cout<<j;
            break;
        }
        else if(s>n)
        {
            cout<<(n-(s-j));
            break;
        }
    }
}