
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

        sort(v.begin(),v.end());
        int s = 0, e = n-1, tr = n-2;

        while(s <= e)
        {
            if(v[s] * v[e] < tr)
            s++;
            else if(v[s] * v[e] > tr)
            e--;
            else
            {
                cout<<v[s]<<" "<<v[e]<<'\n';
                break;
            }
        }

    }
    
}
