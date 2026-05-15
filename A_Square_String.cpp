
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        string f = s.substr(0,s.size()/2);
        string se = s.substr(s.size()/2);

        cout<<(f == se ? "YES" : "NO")<<'\n';
    }
}