
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n;
        cin>>n;

        vector<int>v(n);
        for(auto &x : v)
        cin>>x;

        int ev = -1, od = -1, ec = 0, oc = 0;

        for(int i=0; i<n; i++)
        {
            if(v[i] % 2 == 0)
            {
                ec++;
                if(ev == -1)
                ev = i+1;
            }
            else
            {
                oc++;
                if(od == -1)
                od = i+1;
            }
    
        }
        cout<<(ec == 1 ? ev : od)<<'\n';
    
    
}
