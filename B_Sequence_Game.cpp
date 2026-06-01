
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
        for(int i=0; i<n; i++)
        cin>>v[i];

        vector<int>a;
        a.push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if(v[i] >= a.back())
            a.push_back(v[i]);
            else
            {
                a.push_back(v[i]);
                a.push_back(v[i]);
            }
        }
        cout<<a.size()<<'\n';
        for(int x : a)
        cout<<x<<" ";
        cout<<'\n';
    }
}
