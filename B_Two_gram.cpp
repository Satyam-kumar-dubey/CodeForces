
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  
        int n;
        string s;
        
        cin>>n>>s;

        map<string,int>m;
        for(int i=0; i<n-1; i++)
        {
            string cr = s.substr(i,2);
            m[cr]++;
        }

        int cnt = 0;
        string a;
        for(auto it : m)
        {
            if(it.second > cnt)
            {
                cnt = it.second;
                a = it.first;
            }
        }
        cout<<a<<'\n';
    
    
}
