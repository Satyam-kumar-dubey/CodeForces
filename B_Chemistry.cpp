#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        string s;
        cin>>n>>k>>s;

        vector<int>v(26, 0);
        for(char c : s) 
        v[c - 'a']++;

        int t = 0;
        for (int x : v)
        {
            if(x % 2)
            t++;
        }

        if (k >= t - 1)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
}