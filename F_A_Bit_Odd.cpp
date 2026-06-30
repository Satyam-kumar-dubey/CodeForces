
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}

void solve()
{
    int n;
    string s;
    cin>>n>>s;

    ll inv = 0;
    ll o = 0;

    int f = -1;
    int l = -1;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            if (f == -1)
            f = i;
        }
        else 
        l = i;
    }

    if (f == -1 || l == -1)
    {
        cout << "Bob\n";
        return;
    }

    ll OneCount = 0; 
    ll ZeroCount = 0; 

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            o++;
            if (i < l)
            OneCount++;
        }
        else
        {
            inv += o;
            if (i > f)
            ZeroCount++;
        }
    }
    
    if (inv % 2 != 0 || OneCount % 2 != 0 || ZeroCount % 2 != 0) 
    cout<<"Alice"<<'\n';
    else 
    cout<<"Bob"<<'\n';

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}