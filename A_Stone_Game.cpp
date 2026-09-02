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
        int a;
        cin >> a;

        vector<int> arr(a);

        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        int b = 0;
        int c = 0;
        int mx = INT_MIN;
        int mn = INT_MAX;

        for (int i = 0; i < a; i++) {
            if (arr[i] > mx) {
                mx = arr[i];
                b = i;
            }

            if (arr[i] < mn) {
                mn = arr[i];
                c = i;
            }
        }

        int l = max(b, c) + 1;
        int r = a - min(b, c);

        int lr = 0;

        if (b > c) {
            lr = c + 1 + a - b;
        } else {
            lr = b + 1 + a - c;
        }

        int result = min(l, min(r, lr));

        cout << result << '\n';
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
