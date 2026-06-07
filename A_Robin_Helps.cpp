
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
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(auto &x : v)
        cin>>x;

        int val = 0, cnt = 0;
        for(int x : v)
        {
            if(x >=k )
            val += x;
            else if( x == 0)
            {
                if(val > 0)
                {
                    cnt++;
                    val = val-1;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    
}
