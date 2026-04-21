
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;

        vector<int>v(n + 1, 1e9);
        v[0] = 0;
        v[1] = (s[0] != t[0]); 

        for(int i=2; i<=n; i++)
        {
            v[i] = min(v[i], v[i - 1] + (s[i - 1] != t[i - 1]));
            v[i] = min(v[i], v[i - 2] + (s[i - 2] != s[i - 1]) + (t[i - 2] != t[i - 1]));
        }
        cout<<v[n]<<"\n";
    }
}