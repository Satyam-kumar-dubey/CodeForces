
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    bool f = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char x;
            cin>>x;
            
            if(x == 'C' || x == 'M' || x == 'Y')
            {
                f = false;
                break;
            }
        }
    }
    cout<<(f ? "#Black&White" : "#Color")<<'\n';
    
}
