
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
        int n;
        cin>>n;
        string s;
        cin>>s;

        string o = "Timur";
        sort(s.begin(),s.end());
        sort(o.begin(),o.end());
        
        cout<<( s == o ? "YES" : "NO")<<'\n';
    }
}