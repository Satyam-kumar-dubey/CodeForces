
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>a(n);
        for(int &x : a)
        cin>>x;

        sort(a.begin(), a.end());

        vector<pair<int,int>> v; 
        for(int x : a)
        {
            if (v.empty() || v.back().first != x)
            v.push_back({x, 1});
            else
            v.back().second++;
        }

        bool f = false;

        int m = v.size();
        int i = 0;

        while(i < m)
        {
            int j = i;
            int cnt = 1;
            bool e = (v[i].second % 2 == 0);

            while(j + 1 < m && v[j + 1].first - v[j].first <= k)
            {
                j++;
                cnt++;
                if (v[j].second % 2 == 0)
                e = true;
            }

            if (e || cnt >= 2)
            f = true;

            i = j + 1;
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}