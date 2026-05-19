
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int s = 0;
        while(n != 0)
        {
            s += n % 10;
            n /= 10;
        }
        cout<<s<<'\n';
    }
}