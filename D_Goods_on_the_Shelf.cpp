
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(auto &x : a)
        cin>>x;

        unordered_map<ll, int> m;
        vector<pair<int,int>> v;

        int l = 0;
        while (l < n)
        {
            int r = l;
            while (r + 1 < n && a[r + 1] == a[l])
            r++;
            v.push_back({l, r});
            m[a[l]]++;
            l = r + 1;
        }

        int tmp = 0;
        unordered_set<ll>st;
        for (auto &p : m)
        {
            tmp += p.second - 1;
            if (p.second > 1) st.insert(p.first);
        }

        if (tmp == 0)
        {
            cout << "YES\n";
            continue;
        }

        if (tmp > 4)
        {
            cout<<"NO\n";
            continue;
        }

        vector<int> arr;
        for (auto &[L, R] : v)
        {
            if (!st.count(a[L]))
            continue;

            for (int x : {L, R})
            {
                for (int d = -1; d <= 1; d++)
                {
                    int p = x + d;
                    if (0 <= p && p < n)
                    arr.push_back(p);
                }
            }
        }

        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        auto solve = [&](vector<ll> b) -> bool
        {
            unordered_map<ll, int> cnt;
            int m = (int)b.size();

            for (int i = 0; i < m; )
            {
                int j = i;
                while (j + 1 < m && b[j + 1] == b[i]) j++;
                cnt[b[i]]++;
                i = j + 1;
            }

            for (auto &p : cnt)
            {
                if (p.second != 1)
                return false;
            }
            return true;
        };

        bool f = false;
        if (solve(a))
        f = true;

        for (int i = 0; !f && i < (int)arr.size(); i++)
        {
            for (int j = i + 1; !f && j < (int)arr.size(); j++)
            {
                vector<ll> b = a;
                swap(b[arr[i]], b[arr[j]]);
                if (solve(b)) f = true;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}