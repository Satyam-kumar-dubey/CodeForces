
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

        int sm = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            if(i % 2 == 0)
            sm += x;
            else
            sm -= x;
        }
        cout<<sm<<'\n';
    }
}