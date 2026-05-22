
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin>>s;

    vector<string>v(s);
    for(int i=0; i<s; i++)
    cin>>v[i];

    int count = 1;
    for(int i=1; i<s; i++)
    {
        if(v[i][0] == v[i-1][1])
        count++;
    }
    cout<<count<<'\n';
}