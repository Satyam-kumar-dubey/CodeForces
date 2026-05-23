
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(7);
    for(int i=0; i<7; i++)
    cin>>v[i];

    int s = 0;

    for(int i=0; i<7; i++)
    {
        
        n -= v[i%7];
        if(v[i%7] != 0)
        s++;

        if(n <= 0)
        break;
    }
    cout<<s<<'\n';
    
}
