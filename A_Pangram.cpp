
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int>v(26,0);
    for(char c : s)
    {
        if(isupper(c))
        c = tolower(c);
        v[c-'a']++;
    }
    int c = 0;
    for(int x : v)
    {
        if(x == 0)
        {
            cout<<"NO"<<'\n';
            return 0;
        }
    }
    cout<<"YES"<<'\n';
}
