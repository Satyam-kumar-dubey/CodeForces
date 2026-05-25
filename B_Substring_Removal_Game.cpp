
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
        string s;
        cin>>s;

        vector<int>v;
        int it = 0;

        while(it < s.size())
        {
            if(s[it] == '1')
            {
                int c = 0;
                while(s[it] == '1')
                {
                    c++;
                    it++;
                }
                v.push_back(c);
            }
            it++;
        }
        sort(v.begin(),v.end());

        int a = 0;
        for(int i=v.size()-1; i>=0; i= i-2)
        a += v[i];

        cout<<a<<'\n';
    }
    
}
