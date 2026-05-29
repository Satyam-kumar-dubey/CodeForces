
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
        cin>>n;

        vector<int>v(n);
        vector<char>e,o;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;

            if(i % 2 == 0)
            {
                if(x % 2 == 0)
                e.push_back('e');
                else
                e.push_back('o');
            }
            else
            {
                if(x % 2 == 0)
                o.push_back('e');
                else
                o.push_back('o');
            }
        }
        bool ef = true, of = true;
        for(int i=1; i<e.size(); i++)
        {
            if(e[i] != e[i-1])
            ef = false;
        }
        for(int i=1; i<o.size(); i++)
        {
            if(o[i] != o[i-1])
            of = false;
        }

        if(ef && of)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}
