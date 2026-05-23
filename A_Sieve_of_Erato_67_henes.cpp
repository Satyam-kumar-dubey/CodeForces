
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
        int s;
        cin>>s;
        vector<int>v(s);

        bool f = false;
        for(int i=0; i<s; i++)
        {
            cin>>v[i];
            if(v[i] == 67)
            f = true;
        }

        cout<<(!f ? "NO" : "YES")<<'\n';
    }
}