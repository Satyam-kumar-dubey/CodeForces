
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
        int n,k,q;
        cin>>n>>k>>q;

        vector<int>a(k), b(k), d(q);
        for(int i=0; i<k; i++)
        cin>>a[i];

        for(int i=0; i<k; i++)
        cin>>b[i];

        for(int i=0; i<q; i++)
        cin>>d[i];

    }
}