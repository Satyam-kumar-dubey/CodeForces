
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

        if(k % 2 == 1)
        {
            for(int &x : v)
            {
                if(x % 2 == 1)
                x = x + k;
            }
            for(int x : v)
            cout<<x<<" ";
            cout<<'\n';
        }
        else
        {
            vector<int>r(n);
            for(int i=0; i<n; i++)
            {
                r[i] = v[i] % (k+1);
            }
            for(int i=0; i<n; i++)
            v[i] = v[i] + r[i]*k;

            for(auto x : v)
            cout<<x<<" ";
            cout<<'\n';
        }
    }
}
