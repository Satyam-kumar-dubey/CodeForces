
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    vector<ll>v(n);
    for(ll i = 0; i < n; i++)
    cin >> v[i];


    vector<ll>pref1(n);
    pref1[0] = v[0];
    for(ll i = 1; i < n; i++)
    pref1[i] = pref1[i-1] + v[i];

    vector<ll>s = v;
    sort(s.begin(), s.end());

    vector<ll> pref2(n);
    pref2[0] = s[0];
    for(ll i = 1; i < n; i++)
    pref2[i] = pref2[i-1] + s[i];

    ll m;
    cin>>m;

    while(m--)
    {
        ll op, l, r;
        cin >> op >> l >> r;

        l--;
        r--;

        if(op == 1)
        cout << pref1[r] - (l ? pref1[l-1] : 0) << '\n';
        else
        cout << pref2[r] - (l ? pref2[l-1] : 0) << '\n';
    }
}