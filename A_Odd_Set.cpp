
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

        int e = 0, o = 0;
        for(int i=0; i<2*n; i++)
        {
            int x;
            cin>>x;

            if(x % 2 == 0)
            e++;
            else
            o++;
        }
        cout<<(e == o ? "Yes" : "No")<<'\n';
    }
    
}
