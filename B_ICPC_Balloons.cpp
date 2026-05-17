

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

        vector<int>v(26,0);
        int a = 0;
        for(char c : s)
        {
            if(v[c-'A'] == 0)
            {
                a += 2;
                v[c-'A']++;
            }
            else
            a += 1;
        }
        cout<<a<<'\n';
    }
}
