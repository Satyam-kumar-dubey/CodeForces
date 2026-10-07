
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        stack<int> st;
        vector<bool>pr(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            st.push(i);
            else if (s[i - 1] == '2')
            {
                if (!st.empty())
                {
                    
                    int doc = st.top();
                    st.pop();
                    pr[doc] = true;
                }
                else
                pr[i] = true;
            }
            else
            pr[i] = true;
        }

        vector<int>a;

        for (int i = 1; i <= n; i++)
        {
            if (!pr[i]) 
            a.push_back(i);
        }
        cout << a.size() << '\n';

        for (int x : a)
        {
            cout << x << ' ';
        }
        cout << '\n';
    }
}