
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
        for(int i=0; i<n; i++)
        cin>>v[i];

        int it = 0, a = 0;
        while(it < n)
        {   
            int c  = 0;
            if(v[it] % 2 == 0)
            {
                while(it < n && v[it] % 2 == 0)
                {
                    c++;
                    it++;
                }
            }
            else
            {
                while(it < n && v[it] % 2 != 0)
                {
                    c++;
                    it++;
                }
            }
            a += c-1;
        }
        cout<<a<<'\n';
    }
    
}
