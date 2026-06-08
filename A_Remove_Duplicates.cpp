
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(n), f(1002,0), a;
    for(auto &x : v)
    cin>>x;
    
    for(int i=n-1; i>=0; i--)
    {
        if(f[v[i]] == 0)
        {
            a.push_back(v[i]);
            f[v[i]] = 1;
        }
    }
    reverse(a.begin(), a.end());

    cout<<a.size()<<'\n';
    for(auto &x : a)
    cout<<x<<" ";

    cout<<'\n';
}
