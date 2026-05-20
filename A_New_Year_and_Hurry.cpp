
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;

    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    v[i] = i*5;
    
    int l = 240 - k;
    int c = 0, s= 0;

    for(int i=1; i<=n; i++)
    {
        s += v[i];
        if(s <= l)
        c++;
        else
        break;
    }
    cout<<c<<'\n';
}
