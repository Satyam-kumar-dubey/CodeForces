#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        long long m;
        cin>>n>>m;

        long long p, x;
        cin>>p;
        long long cr=1, t=1;
        for (int i=1; i<n; i++)
        {
            cin>>x;
            if (x == p)
            cr++;
            else
            cr = 1;
            t = max(t, cr);
            p = x;
        }
        if (t >= m)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
}