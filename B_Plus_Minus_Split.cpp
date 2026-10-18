
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
        string s;

        cin>>n>>s;
        
        int sc = 0;
        for(char c : s)
        {
            if(c == '+')
            sc++;
            else 
            sc--;
        }
        cout<<abs(sc)<<'\n';
        
    }
}