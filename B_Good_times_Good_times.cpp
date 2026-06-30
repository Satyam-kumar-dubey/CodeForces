
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll  n)
{
    string s = to_string(n);
    set<char>st(s.begin(), s.end());
    return st.size() <= 2;
}

void solve()
{
   ll x;
    cin >> x;

    for (ll y = 2; y <= 100000; ++y)
    {
        if (check(y) && check(x * y))
        {
            cout<<y<<"\n";
            return;
        }
    }
    for (int i = 2; i <= 9; ++i)
    {
        for (int digit = 1; digit <= 9; ++digit)
        {
           ll y = stoll(string(i, '0' + digit));
            if(check(x * y))
            {
                cout<<y<<"\n";
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        solve();
    }
}