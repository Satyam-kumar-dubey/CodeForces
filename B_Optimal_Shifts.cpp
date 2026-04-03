
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            v.push_back(i);
        }

        if ((int)v.size() == n)
        {
            cout<<0<<'\n';
            continue;
        }

        int res = 0, m = v.size();
        for (int i = 0; i < m; i++)
        {
            int j = (i + 1) % m;
            int temp = (v[j] - v[i] - 1 + n) % n;
            res = max(res, temp);
        }

        cout<<res<<'\n';
    }
}