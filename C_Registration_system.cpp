
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    map<string,int>m;
    while(t--)
    {
        string s;
        cin>>s;

        if(m.size() == 0)
        {
            m[s] = 1;
            cout<<"OK"<<'\n';
        }
        else
        {
            if(m.find(s) != m.end())
            {
                cout<<s<<m[s]<<'\n';
                m[s]++;
            }
            else
            {
                m[s] = 1;
                cout<<"OK"<<'\n';
            }
        }
    }
    
}
