
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
        long long c;
        cin>>n>>c;

        vector<pair<long long,int>>s;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.push_back({v[i],i+1});
        }

        sort(s.begin(),s.end());
        
        vector<long long>p(s.size());
        for(int i=0; i<s.size(); i++)
        p[i] = s[i].first + s[i].second;

        sort(p.begin(),p.end());

        long long ans = 0, sum = 0;
        for(auto it : p)
        {
            if(sum + it <= c)
            {
                sum += it;
                ans++;
            }
            else
            break;
        }
        cout<<ans<<'\n';
    }
}