
 
#include<bits/stdc++.h>
using namespace std;

bool isSrt(vector<int>&v)
{
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] < v[i-1])
        return false;
    }
    return true;
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
        for(int i=0; i<n; i++)
        cin>>v[i];

        if(isSrt(v))
        {
            cout<<v.size()<<'\n';
            continue;
        }
        else
        {
            cout<<1<<'\n';
        }
    }
}
