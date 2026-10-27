
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
        ll n;
        cin>>n;

        if(n % 2 != 0 || n < 4)
        {
            cout<<-1<<'\n';
            continue;
        }

        cout<<((n+5)/6)<<" "<<(n/4)<<'\n';
    }
}