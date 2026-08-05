#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = double;

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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    in(arr);

    db w = n - k + 1;
    db sum = 0.0;

    vector<ll> pref(n);
    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    sum += pref[k - 1];

    for (int i = k; i < n; i++)
    {
        sum += pref[i] - pref[i - k];
    }

    cout << fixed << setprecision(10) << (sum / w) << '\n';
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

}
