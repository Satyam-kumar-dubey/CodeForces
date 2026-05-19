
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>v(3);
    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int a = 0;
    a += v[2]-v[1];
    a += v[1]-v[0];

    cout<<a<<'\n';
}
