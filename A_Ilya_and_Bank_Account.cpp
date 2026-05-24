
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;

    if(n > 0)
    {
        cout<<n<<'\n';
        return 0;
    }
    else
    { 
        ll x = abs(n);
        string a = to_string(x);
        string r1,r2;
        for(int i=a.size()-2; i>=0; i--)
        r1 += a[i];

        for(int i=a.size()-1; i>=0; i--)
        {
            if(i != a.size()-2)
            r2 += a[i];
        }

        reverse(r1.begin(),r1.end());
        reverse(r2.begin(),r2.end());
        ll n1 = stoll(r1);
        ll n2 = stoll(r2);
        cout<<-min(n1,n2)<<'\n';
       
    }
}
