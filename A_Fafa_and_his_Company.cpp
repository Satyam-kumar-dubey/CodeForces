
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int c = 0;
    for(int i=1; i<n; i++)
    {
        int l = i;
        int e = n - i;
        if(e % l == 0)
        c++;
    }
    cout<<c<<'\n';
}
