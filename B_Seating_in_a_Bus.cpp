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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<bool> occupied(n + 1, false);
        bool possible = true;

        occupied[a[0]] = true;

        for (int i = 1; i < n; i++) {
            int seat = a[i];

            bool left = (seat > 1 && occupied[seat - 1]);
            bool right = (seat < n && occupied[seat + 1]);

            if (!left && !right) {
                possible = false;
                break;
            }

            occupied[seat] = true;
        }

        cout << (possible ? "YES" : "NO") << '\n';
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
}
