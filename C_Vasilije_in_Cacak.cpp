
#include<iostream>
using namespace std;

int main ()
{
    long long test;
    cin>>test;

    while(test--)
    {
        long long n,k,x;
        cin>>n>>k>>x;

        long long sum = k*(k+1)/2;
        long long lastSum = (n-k)*(n-k+1)/2;
        long long total = n*(n+1)/2;

        long long reamin = total - lastSum;
        cout<<((sum <= x && x <= reamin) ? "YES" : "NO");
        cout<<'\n';
    }
}