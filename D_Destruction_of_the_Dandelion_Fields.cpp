#include<iostream>
#include<vector>
#include<algorithm>
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

        long long s = 0;
        vector<long long>o;

        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;

            if(x % 2 != 0)
            o.push_back(x);
            else
            s += x;
        }
        if( o.size() == 0 )
        {
            cout<<0<<"\n";
            continue;
        }
        sort(o.begin(),o.end());
        int t = o.size();

        for(int i=t/2; i<t; i++)
        s += o[i];
        cout<<s<<"\n";
    }
}