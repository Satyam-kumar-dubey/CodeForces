
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;

    cin>>n>>s;

    string a;
    int it = 0, nxt = 1;

    while(it < n)
    {
        a += s[it];
        it += nxt;
        nxt++;
    }
    cout<<a<<'\n';
}
