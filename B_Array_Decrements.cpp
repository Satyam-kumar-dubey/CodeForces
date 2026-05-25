
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

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

        vector<ll>a(n);
        vector<ll>b(n);
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n; i++)
        cin>>b[i];

        ll d = 0;
        for(int i=0; i<n; i++)
        d = max(d, (a[i] - b[i]));

        bool f = true;
        for(int i=0; i<n; i++)
        {
            if(a[i] < b[i])
            {
                f = false;
                break;
            }
            if(b[i] > 0)
            {
                if((a[i] - b[i]) != d)
                {
                    f = false;
                    break;
                }
            }
            else
            {
                if(a[i] > d)
                {
                    f = false;
                    break;
                }
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}