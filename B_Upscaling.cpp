
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

        int r = 2*n, c = 2*n;
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(((i/2) + (j/2)) % 2 == 0)
                cout<<'#';
                else
                cout<<'.';
            }
            cout<<'\n';
        }
    }
}