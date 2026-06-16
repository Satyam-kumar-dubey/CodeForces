
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

        int o = 0, e = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            if(x % 2 == 0)
            e += x;
            else
            o += x;
        }
        cout<<(e > o ? "YES" : "NO")<<'\n';
    }
}
