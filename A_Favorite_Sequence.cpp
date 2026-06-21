
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

        vector<int>v(n);
        for(auto &x : v)
        cin>>x;

        int it1 = 0, it2 = n-1;
        while(it1 <= it2)
        {
            cout<<v[it1]<<" ";
            if(it1 != it2)
            cout<<v[it2]<<" ";
            it1++;
            it2--;
        }
        cout<<'\n';
    }
    
}
