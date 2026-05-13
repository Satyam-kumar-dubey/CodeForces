
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
        int n , sm = INT_MAX, p = -1;
        cin>>n;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] < sm)
            {
                sm = v[i];
                p = i;
            }
        }
        v[p]++;

        long long a = 1;
        for(int i=0; i<n; i++)
        a *= v[i];
        cout<<a<<'\n';
    }
}