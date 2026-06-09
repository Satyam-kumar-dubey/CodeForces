
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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        int o = 0, p = 0;

        for(char ch : s)
        {
            if(ch == '(')
                o++;
            else
            {
                if(o > 0)
                {
                    o--;
                    p++;
                }
            }
        }

        int del = min(p, k);

        string ans(n, '0');
        stack<int> st;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            st.push(i);
            else
            {
                if(!st.empty())
                {
                    int pos = st.top();
                    st.pop();

                    if(del > 0)
                    {
                        ans[pos] = '1';   
                        del--;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
}