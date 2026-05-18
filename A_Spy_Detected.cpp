

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
        
        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int mx;
        if(v[0] == v[1])
        mx = v[0];
        else if(v[0] == v[2])
        mx = v[0];
        else 
        mx = v[1];

        for(int i=0; i<n; i++)
        {
            if(v[i] != mx)
            {
                cout<<i+1<<"\n";
                break;
            }
        }
    }
}
