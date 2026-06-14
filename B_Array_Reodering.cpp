
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int a, int b) 
{
    while(b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

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

        vector<int>v(n),e;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] % 2 == 0)
            {
                e.push_back(v[i]);
                v[i] = 0;
            }
        }
        
        vector<int>a;
        for(int i=0; i<e.size(); i++)
        a.push_back(e[i]);

        for(int i=0; i<n; i++)
        {
            if(v[i] != 0)
            a.push_back(v[i]);
        }

        int c = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(gcd(a[i],2*a[j]) > 1)
                c++;
            }
        }
        cout<<c<<'\n';
    }
    
}
