
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        string a,b;
        cin>>n>>a>>b;

        ll evA = 0, odA = 0, evB = 0, odB = 0;
        for(ll i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                if(a[i] == '1')
                evA++;
                if(b[i] == '1')
                evB++;
            }
            else
            {
                if(a[i] == '1')
                odA++;
                if(b[i] == '1')
                odB++;
            }
        }
        if(evA == evB && odA == odB)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}