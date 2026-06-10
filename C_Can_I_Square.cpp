
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

        ll s = 0;
        vector<int>v(n);
        for(int &x : v)
        {
            cin>>x;
            s += x;
        }
        
        bool f = false;
        for(int i=1; i*i <=s; i++)
        {
            if(i*i == s)
            {
                f = true;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
    
}
