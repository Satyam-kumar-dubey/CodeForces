#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}
bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

void solve()
{
    int t;
    cin >> t;

    vector<vector<int>> v(t, vector<int>(t));
    int mx = INT_MIN;

    if (t <= 2)
    {
        cout << t << endl;
    }
    else
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                if (i == 0 || j == 0)
                {
                    v[i][j] = 1;
                }
                else
                {
                    v[i][j] = v[i][j - 1] + v[i - 1][j];
                    mx = max(mx, v[i][j]);
                }
            }
        }
        cout << mx << endl;
    }

}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
}
