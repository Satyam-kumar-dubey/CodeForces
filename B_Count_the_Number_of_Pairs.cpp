
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        vector<int>l(26,0);
        vector<int>u(26,0);

        for(char c : s)
        {
            if(islower(c))
            l[c-'a']++;
            else
            u[c-'A']++;
        }
        int a = 0;
        for(int i=0; i<26; i++)
        {
            int x = min(l[i],u[i]);
            a += x;
            l[i] -= x;
            u[i] -= x;

            int y = max(l[i], u[i])/2;
            int tp = min(y, k);
            a += tp;

            k -= tp;
        }
        cout<<a<<'\n';
    }
    
}
