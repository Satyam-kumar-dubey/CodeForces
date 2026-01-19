
#include<iostream>
#include<vector>
using namespace std;

long long n,magic;
vector<long long>a(n);
vector<long long>b(n);

bool check(long long val)
{
    long long magicNeeded = 0;
    for(long long i=0; i<n; i++)
    {
        long long makeCookies = a[i] * val;
        if(makeCookies > b[i])
        {
            magicNeeded += (makeCookies - b[i]);
            if(magicNeeded > magic)
            return false;
        }
    }
    return magicNeeded <= magic;
}
int main ()
{
    cin>>n>>magic;

    a.resize(n);
    b.resize(n);

    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++)
    cin>>b[i];

    long long start = 0, end = (long long)1e13;

    while( start < end )
    {
        long long mid = (start+end+1)/2;
        if(check(mid))
        start = mid;
        else
        end = mid-1;
    }
    cout<<start<<endl;
}