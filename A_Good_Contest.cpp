
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

        int mn = INT_MAX;
        vector<int>v(3);
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
            mn = min(mn,v[i]);
        }

        cout<<(n - mn)<<'\n';
    }
}