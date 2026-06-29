
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int solve(int i, int n)
{
    int sm = 0;
    int it = 1;
    while(i*it <= n)
    {
        sm += i*it;
        it++;
    }
    return sm;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a = 0, x = 0;
        for(int i=2; i<=n; i++)
        {
            int val = solve(i,n);
            if(val > a)
            {
                a = val;
                x = i;
            }
        }
        cout<<x<<'\n';
    }
    
}
