
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

        vector<int>ps;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;

            for(int i=0; i<4; i++)
            {
                if(s[i] == '#')
                ps.push_back(i+1);
            }
        }
        reverse(ps.begin(),ps.end());
        for(int x : ps)
        cout<<x<<" ";

        cout<<'\n';
    }

}
