
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int sr = n*a;
    int sp = (n/m) * b;
    int r = (n - ((n/m)*m) ) * a;

    int e = ((n/m) + 1) * b;

    cout<<min({sr, (sp+r), e})<<'\n';
    
}
