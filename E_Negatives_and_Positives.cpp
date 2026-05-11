
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
        
        long long s = 0, sm = LLONG_MAX, neg = 0;
        vector<long long >v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sm = min(sm,abs(v[i]));

            s += abs(v[i]);

            if(v[i] < 0)
            neg++;
        }
        
        cout<<(neg % 2 != 0 ? (s - 2*sm) : s)<<'\n';
    }
}