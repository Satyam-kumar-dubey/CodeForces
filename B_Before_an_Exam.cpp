
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int n, ts;
        cin>>n>>ts;

        vector<pair<int,int>> v(n);

        int mnSum = 0, mxSum = 0;

        for(auto &x : v)
        {
            cin >> x.first >> x.second;
            mnSum += x.first;
            mxSum += x.second;
        }

        if(ts < mnSum || ts > mxSum)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";

            vector<int>ans(n);

            for(int i = 0; i < n; i++)
            ans[i] = v[i].first;

            int diff = ts - mnSum;

            for(int i = 0; i < n && diff > 0; i++)
            {
                int val = v[i].second - v[i].first;
                int add = min(val, diff);

                ans[i] += add;
                diff -= add;
            }

            for(int x : ans)
            cout << x << ' ';
            cout << '\n';
        }

}