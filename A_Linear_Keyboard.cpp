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
        string keyboard, s;
        cin >> keyboard >> s;

        int pos[26];

        for (int i = 0; i < 26; i++) {
            pos[keyboard[i] - 'a'] = i;
        }

        int ans = 0;

        for (int i = 1; i < s.length(); i++) {
            ans += abs(
                pos[s[i] - 'a'] -
                pos[s[i - 1] - 'a']
            );
        }

        cout << ans << '\n';
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
