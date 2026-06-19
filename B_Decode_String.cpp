
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
        string s, ans;
        
        cin>>n>>s;
        int it = n-1;
        while (it >= 0)
        {
            if (s[it] == '0')
            {
                string st;
                st += s[it - 2];
                st += s[it - 1];

                int dig = stoi(st);

                ans += char('a' + dig - 1);
                it -= 3;
            }
            else
            {
                int dig = s[it] - '0';
                ans += char('a' + dig - 1);
                it--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
}
