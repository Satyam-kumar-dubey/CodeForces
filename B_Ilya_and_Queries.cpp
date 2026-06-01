
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    int n;
    cin>>s>>n;

    vector<int>v(s.size());
    v[0] = 0;

    for(int i=1; i<s.size(); i++)
    {
        if(s[i] == s[i-1])
        v[i] = v[i-1] + 1;
        else
        v[i] = v[i-1];
    }

    while(n--)
    {
        int l,r;
        cin>>l>>r;

        l--;
        r--;
        cout<<v[r] - v[l]<<"\n";
    }
    
}
