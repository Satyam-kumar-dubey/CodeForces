
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n, o = 0;
        cin>>n;
        long long s = 0, sm = LLONG_MAX;

        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s += v[i];

            if(v[i] % 2 != 0)
            {
                o++;
                sm = min(sm,v[i]);
            }
        }
        if( o == 0)
        cout<<0<<"\n";
        else if ( o == 1)
        cout<<s<<"\n";
        else 
        cout<<(s - sm)<<"\n";
    }
}