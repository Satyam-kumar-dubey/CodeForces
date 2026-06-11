
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;
        vector<int>v(n + 2, 0);

        for (int i=0; i<n; i++) 
        {
            int x;
            cin>>x;
            v[x]++;
        }
        if (v[0]==0) 
        {
            cout<<"NO"<<'\n';
        }
        else if (v[0] >= 2 && v[1] == 0) 
        {
            cout<<"NO"<<'\n';
        }
        else 
        {
            cout<<"YES"<<'\n';
        }
    }

    
}
