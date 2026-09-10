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
    string s;
    cin >> s;

    int c = 0;

    for (int i = 0; i < s.length() - 2; i++) {
        char ch = s[i];

        if (ch == 'Q') {
            for (int j = i + 1; j < s.length() - 1; j++) {
                char ch2 = s[j];

                if (ch2 == 'A') {
                    for (int k = j + 1; k < s.length(); k++) {
                        char ch3 = s[k];

                        if (ch3 == 'Q') {
                            c++;
                        }
                    }
                }
            }
        }
    }

    cout << c << endl;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}
