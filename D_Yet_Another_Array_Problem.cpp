#include<iostream>
#include<vector>
using namespace std;

long long solve(long long a, long long b)
{
    while(b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<long long>a(n);
        for (auto &x : a)
        cin>>x;

        long long r = LLONG_MAX;

        for(long long x : a)
        {
            for(long long i = 2; i <= 60; i++)
            {
                if(solve(x, i) == 1)
                {
                    r = min(r, i);
                    break;
                }
            }
        }
        cout<<r<<"\n";
    }
}