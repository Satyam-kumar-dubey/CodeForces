
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
        int n;
        string s;
        cin>>n>>s;

        bool f = true;
        vector<int>fr(26,-1);
        fr[s[0]-'a']=0;
        for(int i=1; i<n; i++)
        {
            if(fr[s[i]-'a'] == -1)
            fr[s[i]-'a'] = i;
            else if((fr[s[i]-'a'] % 2 == 0 && i%2 != 0) || (fr[s[i]-'a'] % 2 != 0 && i%2 == 0))
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}
