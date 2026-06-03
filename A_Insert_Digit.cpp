
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
        int n,d;
        string s;
        cin>>n>>d>>s;

        bool f = true;
        for(int i=0; i<n; i++)
        {
            if(s[i]-'0' < d)
            {
                s.insert(i,1,d+'0');
                f = false;
                break;
            }
        }
        if(f)
        s.push_back(d+'0');
        cout<<s<<'\n';
    }
    
}
