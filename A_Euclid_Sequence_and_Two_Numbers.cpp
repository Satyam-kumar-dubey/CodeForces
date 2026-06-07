
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
        for(auto &x : v)
        cin>>x;

        sort(v.rbegin(),v.rend());

        bool f = true;
        for(int i=2; i<n; i++)
        {
            if(v[i] != (v[i-2] % v[i-1]))
            {
                f = false;
                break;
            }
        }
        if(!f)
        cout<<-1<<'\n';
        else 
        cout<<v[0]<<" "<<v[1]<<'\n';
    }
    
}
