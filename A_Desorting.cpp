
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool asc(vector<int> v)
{
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < v[i - 1])
        return false;
    }
    return true;
}

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
        for(int i = 0; i < n; i++)
        cin >> v[i];

        if(!asc(v))
        {
            cout << 0 << '\n';
            continue;
        }

        int mn = INT_MAX;
        for(int i = 1; i < n; i++)
        mn = min(mn, v[i] - v[i - 1]);

        cout<<mn / 2 + 1<<'\n';
    }
}