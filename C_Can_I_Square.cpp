
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
        
        ll a = sqrtl(s);
        if(a*a == s)
        cout<<"YES"<<'\n';
        else 
        cout<<"NO"<<'\n';
    }
    
}
