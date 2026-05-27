
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;

    string an;
    for(int i=0; i<k; i++)
    {
        char c = i + 'a';
        an += c;
    }
    int r = n-k;
    for(int i=0; i<r; i++)
    an += an[i];

    cout<<an<<'\n';
    
}
