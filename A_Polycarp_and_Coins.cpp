
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

        ll tw = n / 3;
        ll on = n / 3;
        if( n % 3 == 1)
        on++;
        else if (n % 3 == 2)
        tw++;

        cout<<on<<" "<<tw<<'\n';
    }
    
}
