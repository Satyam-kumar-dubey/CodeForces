
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int war(int n, ll m, int k)
{
    int l = k - 1;
    int r = n - k;

    int ans = 1;
    if(m >= 1 && n > 1)
    ans = 2;

    int mxd = max(l, r);

    for (int i = 1; i <= mxd; i++) {
        ll temp = m - 2LL * i + 1;
        if (temp < 0)
        continue;

        ll s = min((ll)i, temp);

        if (i <= l) {
            ll s2 = min(s, (ll)r);
            ans = max(ans, (int)(1 + i + s2));
        }

        if (i <= r) {
            ll s2 = min(s, (ll)l);
            ans = max(ans, (int)(1 + i + s2));
        }
    }

    return min(ans, n);
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        ll m;
        cin>>n>>m>>k;
        cout<<war(n, m, k)<<'\n';
    }
}