
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

        if(n == 2)
        cout<<-1<<" "<<2<<'\n';
        else
        {
            vector<int>v(n);
            for(int i=0; i<n; i++)
            {
                if(i % 2 == 0)
                v[i] = -1;
                else 
                v[i] = 3;
            }
            if( n % 2 == 0)
            v[n-1] = 2;
            for(int x : v)
            cout<<x<<" ";
            cout<<'\n';
        }
    }
}