
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
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

        vector<int>v(n);
        in(v);

        sort(v.begin(),v.end());

        bool f = true;
        int it = 0;
        while(it < n)
        {
            if(it+1 < n && v[it] % 2 == 0 && v[it+1] % 2 == 0)
            {
                it = it+2;
            }
            else if(it+1 < n && v[it] % 2 == 1 && v[it+1] % 2 == 1)
            {
                it = it+2;
            }
            else if(it+1 < n && (v[it+1] - v[it] ==1))
            {
                it = it+2;
            }
            else
            {
                f = false;
                break;
            }
        }
        cout<<(!f ? "NO" : "YES")<<'\n';
    }
    
}
