
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<int,int>m;
    stack<int>st;

    st.push(-1);
    string s;
    cin>>s;

    int mx = 0, c = 0;
    for(int i=0; i<s.size(); i++)
    {
       if(s[i] == '(')
       st.push(i);
       else
       {
            st.pop();
            if(st.empty())
            st.push(i);
            else
            {
                int l = i - st.top();
                if(l > mx)
                {
                    mx = l;
                    c = 1;
                }
                else if( l == mx)
                c++;
            }
        }  
       
    }
    if(mx == 0)
    {
        cout<<mx<<" "<<1<<'\n';
    }
    else
    cout<<mx<<" "<<c<<'\n';
}
