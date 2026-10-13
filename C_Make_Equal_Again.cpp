
#include<bits/stdc++.h>
using namespace std;

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
        for(auto &x: v)
        cin>>x;

        int fi = 0, li = n-1;
       
        while(fi+1 < n && v[fi+1] == v[0])
        fi++;

        while(li-1 >= 0 && v[li-1] == v[n-1])
        li--;

        if(v[0] == v[n-1])
        cout<<max(0, li-fi-1)<<'\n';
        else
        cout<<min(li, n-fi-1)<<'\n';
        
    }
}