
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n;
    cin>>n;

    if(n == 1)
    {
        cout<<0<<'\n';
        return 0;
    }
    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int mx = *max_element(v.begin(),v.end());
    int a = 0;
    for(int i=0; i<n; i++)
    a += (mx-v[i]);

    cout<<a<<'\n';
    
}
