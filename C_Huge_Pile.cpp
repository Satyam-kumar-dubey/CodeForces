
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(k > n)
        {
            cout<<-1<<'\n';
            continue;
        }
        if(k == n)
        {
            cout<<0<<'\n';
            continue;
        }

        ll mx = n, mn = n, ti = 0, a = -1;
        while(ti <= 60)
        {
            if(mn <= k && k <= mx)
            {
                a = ti;
                break;
            }
            mx = (mx + 1) / 2;
            mn = mn / 2;
            ti++;

            if(mx < k)
            break;
        }
        cout<<a<<'\n';
    }
    
}
