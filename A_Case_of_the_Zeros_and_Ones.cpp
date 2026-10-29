
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin>>n>>s;

    stack<char>st;
    st.push(s[0]);

    for(int i=1; i<n; i++)
    {
        char c = s[i];
        if(!st.empty() && st.top() != c)
        st.pop();
        else 
        st.push(c);
    }
    cout<<st.size()<<'\n';
}