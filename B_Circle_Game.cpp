
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
        vector<ll>v(n);
        
        for(auto &it : v)
        cin>>it;
        
        int m = 0, j = 0;
        for(int i=0; i<n; i++)
        {
            if(i % 2 == 0)
            {
                if(v[i] % 2 == 1)
                m++;
                else
                j++;
            }
            else
            {
                if(v[i] % 2 == 1)
                j++;
                else
                m++;
            }
        }
        if(m > j)
        cout<<"Mike"<<'\n';
        else 
        cout<<"Joe"<<'\n';
    }
    
}
