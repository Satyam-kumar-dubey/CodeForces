
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

        for(int i=0; i<n; i++)
        cin>>v[i];

        sort(v.begin(),v.end());
        int h = v[0], c = 1;

        bool f = false;
        for(int i=1; i<n; i++)
        {
            if(v[i] == h)
            c++;
            else
            {
                h = v[i];
                c = 1;
            }

            if(c == 3)
            {
                f = true;
                break;
            }
        }
        cout<<(f ? h : -1)<<'\n';
    }
    
}
