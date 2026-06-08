
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int idx (vector<ll>&a, ll id)
{
    int l=0, r=a.size()-1, ans=-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(a[mid] >= id)
        {
            ans = mid;
            r = mid-1;
        }
        else
        l = mid+1;
    }
    return ans;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    vector<ll>d(n),q(m);
    for(auto &x : d)
    cin>>x;

    for(auto &x : q)
    cin>>x;

    vector<ll>a(n);
    a[0] = d[0];
    for(int i=1; i<n; i++)
    a[i] = a[i-1] + d[i];

    for(auto &it : q)
    {
        int pos = idx(a,it);
        cout<<pos+1<<" "<<it-(pos>0 ? a[pos-1] : 0)<<'\n';
    }
}
