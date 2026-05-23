
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
        int s;
        cin>>s;

        vector<int>v(s);
        for(int i=0; i<s; i++)
        cin>>v[i];

        int a = v[s-1] - v[0];

        for(int i=1; i<s; i++)
        a = max(a, (v[i] - v[0]));

        for(int i=0; i<s-1; i++)
        a = max(a,(v[s-1]-v[i]));

        for(int i=0; i<s-1; i++)
        a = max(a,(v[i]-v[i+1]));

        cout<<a<<'\n';
    }
}