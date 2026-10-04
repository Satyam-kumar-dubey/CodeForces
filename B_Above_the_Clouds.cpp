
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

        unordered_map<char,int>m;
        for(char c : s)
        m[c]++;

        bool possible = false;
        for(int i=1; i<n-1; i++)
        {
            if(m[s[i]] > 1)
            {
                possible = true;
                break;
            }
        }
        cout<<(possible == true ? "Yes" : "No")<<'\n';
    }
}