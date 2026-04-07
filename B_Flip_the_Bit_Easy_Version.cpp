
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int s;
        cin>>s;

        int a = v[s-1];
        
        vector<int>v2(n+1);
        for(int i=1; i<=n; i++)
        v2[i] = v[i-1]^a;

        int l=0, r=0;
        if(s>1)
        {
            l=v2[1];
            for (int i = 2; i <= s - 1; i++)
            {
                if (v2[i] != v2[i - 1])
                l++;
            }
        }
        if(s<n)
        {
            r = v2[n];
            for (int i = n - 1; i >= s + 1; i--)
            {
                if (v2[i] != v2[i + 1])
                r++;
            }
        }

        int res = max(l,r);
        cout<<(res%2 == 0 ? res : res+1)<<'\n';

    }
}