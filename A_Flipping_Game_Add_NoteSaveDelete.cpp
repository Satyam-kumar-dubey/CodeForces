
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int o = 0, s = 0, mx = INT_MIN;
    for(int i=0; i<n; i++)
    {   
        int x;
        cin>>x;
        
        if(x == 0)
        s++;
        else 
        {
            s--;
            o++;
        }

        if(s > mx)
        mx = s;
        if(s < 0)
        s = 0;
    }
    cout<<o+mx<<'\n';
    
}
