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
        int n2;
        cin >> n2;

        string s = to_string(n2);
        bool b = true;

        if (s.length() > 2 && s[0] == '1' && s[1] == '0')
        {
            string sb = "";

            for (int i = 2; i < s.length(); i++)
            {
                char ch = s[i];

                if (i == 2 && ch == '0')
                {
                    b = false;
                }

                sb += ch;
            }

            int rem = stoi(sb);

            if (rem < 2)
            {
                b = false;
            }

            if (b)
            cout << "YES\n";
            else
            cout << "NO\n";
        }
        else
        {
            cout << "NO\n";
        }
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
