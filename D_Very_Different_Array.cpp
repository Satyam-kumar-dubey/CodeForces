
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
        int n,m;
        cin>>n>>m;

        vector<int>a(n),b(m);
        for(auto &x : a)
        cin>>x;

        for(auto &x : b)
        cin>>x;

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        
        ll ans = 0;
        int i = 0, j = n-1, x = 0, y = m-1;
        while( i <= j )
        {
            int op1 = abs(a[i] - b[x]);
            int op2 = abs(a[j] - b[y]);

            if(op1 >= op2)
            {
                ans += op1;
                i++;
                x++;
            }
            else
            {
                ans += op2;
                j--;
                y--;
            }
        }
        cout<<ans<<'\n';
    }
    
}
