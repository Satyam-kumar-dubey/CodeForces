
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s = to_string(n);
        if(s.size() == 1)
        {
            cout<<1<<'\n';
            cout<<n<<'\n';
            continue;
        }
        else
        {
            vector<int>v;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i] != '0')
                {
                    int val = (s[i]-'0') * pow(10,s.size()-i-1);
                    v.push_back(val);
                }
            }
            cout<<v.size()<<'\n';
            for(int x : v)
            cout<<x<<" ";

            cout<<'\n';
        }
    }
}
